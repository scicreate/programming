//4/8(1)
#include <iostream>
using namespace std;

int main()
{
	for(int n=1;n<=10;n++)//�������ʮ�з���
	{
		for(int i=1;i<=10-n;i++)
			cout<<" ";
		for(int j=1;j<=2*n-1;j++)
			cout<<"#";
		cout<<endl;//ÿ�����һ��Ҫ���У�������һ�е����
	}
		
	return 0;
}
