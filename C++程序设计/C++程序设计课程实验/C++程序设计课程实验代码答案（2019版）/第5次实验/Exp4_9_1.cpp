//4.9(1)

#include <iostream>
#include <iomanip>
using namespace std;

int main()
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
	return 0;
}
