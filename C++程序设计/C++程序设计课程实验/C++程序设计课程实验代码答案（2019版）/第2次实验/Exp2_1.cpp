#include <iostream>
#include <iomanip>
using namespace std;

int main( )
{
	int a , b, temp;//���ݶ��岿�� 
	cout << "a,b = " ;//
	cin >> a >> b;//
	cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
	
	//����1�������Ĳ��� 
	//temp=a;
	//a=b;
	//b=temp;
	a=b;
	b=a; 
	
	//����4��'\t'�����Ʊ��setw()��endl���У���'\n'
	cout<<"a="<<a<<'\t'<<"b="<<b<<endl; 
	//cout<<setiosflags(ios::left)<<"a="<<setw(6)<<a<<"b="<<setw(6)<<b<<endl; 
	//cout<<"1234567812345678"<<endl;
	
	return 0;
}
/*
����2�� ����3��10������������
����3�� ����3��10��������Ϊa=10,b=10 
*/
 

