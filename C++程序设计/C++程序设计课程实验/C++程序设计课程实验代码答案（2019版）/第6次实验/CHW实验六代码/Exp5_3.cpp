//5.3

#include <iostream>
#include <iomanip>
using namespace std;

void multiTab_full();
void multiTab_left();
void multiTab_right();

int main()
{
	multiTab_full();
	multiTab_left();
	multiTab_right();
	
	return 0;
}

void multiTab_full()
{
	cout<<"  *";
	for(int i=1;i<=9;i++)
		cout<<setw(4)<<i;
	cout<<"\n-----------------------------------------\n";

	for(int j=1;j<=9;j++)//����������У���9��
	{
		cout<<setw(3)<<j;
		for(int k=1;k<=9;k++)//���������ÿһ���е�ÿһ��
			cout<<setw(4)<<j*k;
		cout<<endl;//ÿ�����һ�к�Ҫ����׼�������һ��
	}
	cout<<endl;
}

void multiTab_left()
{
	cout<<"  *";
	for(int i=1;i<=9;i++)
		cout<<setw(4)<<i;
	cout<<"\n-----------------------------------------\n";

	for(int j=1;j<=9;j++)//����������У���9��
	{
		cout<<setw(3)<<j;
		for(int k=1;k<=j;k++)//��(1)��ȣ��޸Ĵ�ѭ��������������n�У����n���������������ÿһ���е�ÿһ��
			cout<<setw(4)<<j*k;
		cout<<endl;//ÿ�����һ�к�Ҫ����׼�������һ��
	}
	cout<<endl;
}

void multiTab_right()
{
	cout<<"  *";
	for(int i=1;i<=9;i++)
		cout<<setw(4)<<i;
	cout<<"\n-----------------------------------------\n";

	for(int j=1;j<=9;j++)//����������У���9��
	{
		cout<<setw(3)<<j;
		int k=1;
//		/*
		for(;k<j;k++)//���������ÿһ���е�ÿһ��
			cout<<setw(4)<<" ";//��n�У����n-1���ո����Լ���������Ϊk<j
		for(;k<=9;k++)
			cout<<setw(4)<<j*k;
//		*/

		/*
		if(j!=1)
			cout <<setw(4*j-4) <<" ";//��n�У����n-1���ո� setw(4) 4����n-1
		for (k=j;k<=9;k++)
			cout<<setw(4)<<j*k;
		*/
		cout<<endl;//ÿ�����һ�к�Ҫ����׼�������һ��
	}
	cout<<endl;
}

