//4.9(2)

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<"  *";
	for(int i=1;i<=9;i++)
		cout<<setw(4)<<i;
	cout<<"\n-----------------------------------------\n";

	for(int j=1;j<=9;j++)//控制输出的行，共9行
	{
		cout<<setw(3)<<j;
		for(int k=1;k<=j;k++)//与(1)相比，修改此循环继续条件→第n行，输出n个数；控制输出的每一行中的每一项
			cout<<setw(4)<<j*k;
		cout<<endl;//每输出完一行后，要换行准备输出下一行
	}
	return 0;
}
