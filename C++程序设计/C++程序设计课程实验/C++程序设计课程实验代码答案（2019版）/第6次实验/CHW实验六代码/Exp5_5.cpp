//5.5
//쳲��������У�1,1,2,3,5,8,13,21.........

#include <iostream>
using namespace std;

int fib(int n);
int fib_1(int n);

int main()
{
	int n;
	cout<<"���������еĵڼ��\n";
	cin>>n;

	while(n<=0)
	{
		cout<<"���������0��������"<<endl;
		cin>>n;
	}

	cout<<"��"<<n<<"��쳲��������е�ֵΪ��"<<fib(n)<<endl;
	cout<<"��"<<n<<"��쳲��������е�ֵΪ��"<<fib_1(n)<<endl;

	return 0;
}
int fib(int n)
{
	int f1,f2,fn;
	f1=f2=1;

	for(int i=3;i<=n;i++)
	{
		fn=f1+f2;
		f1=f2;
		f2=fn;
	}

	return fn;
}

int fib_1(int n)
{
	if(n==1||n==2)
		return 1;
	else
		return fib_1(n-1)+fib_1(n-2); 
}


