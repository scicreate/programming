//4.9(3) 

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
		int k=1;
	//	/*
		for(;k<j;k++)//���������ÿһ���е�ÿһ��
			cout<<setw(4)<<" ";//��n�У����n-1���ո����Լ���������Ϊk<j
		for(;k<=9;k++)
			cout<<setw(4)<<j*k;
	//	*/

		/*
		if(j!=1)
			cout <<setw(4*j-4) <<" ";//��n�У����n-1���ո� setw(4) 4����n-1
		for (k=j;k<=9;k++)
			cout<<setw(4)<<j*k;
		*/
		cout<<endl;//ÿ�����һ�к�Ҫ����׼�������һ��
	}
	return 0;
}
