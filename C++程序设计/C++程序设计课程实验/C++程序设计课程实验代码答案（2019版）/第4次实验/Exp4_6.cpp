//4.6

#include <iostream>
using namespace std;

int Peach(int n);

int main()
{
	
	int sum=1;

	for(int i=9;i>=1;i--)
		sum=2*(sum+1);

	cout<<"��һ�칲ժ��"<<sum<<"������"<<endl;
	cout<<"��һ�칲ժ��"<<Peach(1)<<"������"<<endl;
	
	return 0;
}

//�ݹ�ⷨ 
int Peach(int n)
{
	if(n==10)
		return 1;
	else
		return 2*(Peach(n+1)+1);
}

