//3.5

#include <iostream>
using namespace std;

int main()
{
	int a,b,c,t,x;
	cout<<"������һ��������"<<endl;
	cin>>x;

	a=x%3==0;
	b=x%5==0;
	c=x%7==0;
	t=100*a+10*b+c;

	///*
	//��if���
	if(t==0)
		cout<<"���ܱ�3,5,7��һ������"<<endl;
	if(t==100)
		cout<<"ֻ�ܱ�3����"<<endl;
	if(t==10)
		cout<<"ֻ�ܱ�5����"<<endl;
	if(t==1)
		cout<<"ֻ�ܱ�7����"<<endl;
	if(t==110)
		cout<<"�ܱ�3��5����"<<endl;
	if(t==101)
		cout<<"�ܱ�3��7����"<<endl;
	if(t==11)
		cout<<"�ܱ�5��7����"<<endl;
	if(t==111)
		cout<<"�ܱ�3��5��7����"<<endl;
	//*/

    /*
	//��switch���
	switch (t)
	{
		case 0:   cout<<"���ܱ�3,5,7��һ������"<<endl;break;
		case 100: cout<<"ֻ�ܱ�3����"<<endl;break;
		case 10:  cout<<"ֻ�ܱ�5����"<<endl;break;
		case 1:   cout<<"ֻ�ܱ�7����"<<endl;break;
		case 110: cout<<"�ܱ�3��5����"<<endl;break;
		case 101: cout<<"�ܱ�3��7����"<<endl;break;
		case 11:  cout<<"�ܱ�5��7����"<<endl;break;
		case 111: cout<<"�ܱ�3��5��7����"<<endl;break;
	}
	*/		
  
	return 0;
}
