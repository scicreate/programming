//4.10

#include <iostream>
using namespace std;

long cow(int n);

int main()
{
	long x1=1,x2=1,x3=1,sum=0;
	int n;

	cout<<"���˽�ڼ���ĸţ�����"<<endl;
	cin>>n;
	
	for(int i=4;i<=n;i++)
	{
		sum=x3+x1;
		x1=x2;
		x2=x3;
		x3=sum;
	}
	
	cout<<"����ĸţ"<< x3<<"ͷ"<<endl;//���x3��֤�����ǰ�������ֵҲ����ȷ�� 
	cout<<"����ĸţ"<<cow(n)<<"ͷ"<<endl;
	return 0;
}
//�ݹ�ⷨ 
long cow(int n)
{
	long number;
	if(n==1||n==2||n==3)
		number=1;
	else
		number=cow(n-1)+cow(n-3);
	return number;	
}
