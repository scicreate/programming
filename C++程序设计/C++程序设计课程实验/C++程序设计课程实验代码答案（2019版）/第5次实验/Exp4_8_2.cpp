//4.8(2)
#include <iostream>
using namespace std;

int main()
{
	for(int n=1;n<=8;n++)//�������������
	{
		for(int i=1;i<=n-1;i++)
			cout<<" ";
		for(int j=1;j<=18-n;j++)
			cout<<"# ";
		cout<<endl;//ÿ���һ�н��л��У�������һ�е����
	}
	return 0;
}
