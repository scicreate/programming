//4.5

#include <iostream>
using namespace std;

int main()
{
	float sum=100,height=50;
	int i,n;
	cout<<"�����˽�ڼ�����غͷ��������"<<endl;
	cin>>n;
	if(n==1)
	{
		cout<<"��1�����侭��"<<sum<<"m"<<endl;
		cout<<"��1�η���"<<height<<"m"<<endl;
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			sum+=2*height;
			height=height/2;
		}
		cout<<"��"<<i-1<<"�����侭��"<<sum<<"m"<<endl;//i-1 ���ڼ����Ƿ���㵽�˵�n�� 
		cout<<"��"<<i-1<<"�η���"<<height<<"m"<<endl;
	}
	
	return 0;
}
