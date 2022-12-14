//10_3

#include <iostream.h>
struct Node{
  char c;
  Node* next;
};

Node* reverse(Node* head);

void main()
{
  Node x[4];
  for(int i=0; i<4; i++){
    x[i].c='A'+i;
    cout <<x[i].c <<"->";
    x[i].next = &x[i+1];
  }
  cout <<"NULL" <<endl;
  x[3].next = NULL;

  Node* head = reverse(x);

  for(Node* pH=head; pH; pH=pH->next)
    cout <<pH->c <<"->";
  cout <<"NULL" <<endl;
}

Node* reverse(Node* head)
{
  Node* newHead=NULL;
  for(Node* pT=head; pT; pT=head){
    head=head->next;
    pT->next = newHead;
    newHead = pT;
  }
  return newHead;
}
