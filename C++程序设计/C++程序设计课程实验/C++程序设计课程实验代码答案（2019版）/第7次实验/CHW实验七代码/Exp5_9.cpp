//5.9

#include <iostream>
using namespace std; 

long count(int);

int main()
{
	int n;
	cout<<"������������ \n";
	cin>>n;

	cout<<"��"<<n<<"�깲��ĸţ��"<<count(n)<<"ͷ \n";
	
	return 0;
}

long count(int year)
{
	if(year<=0)
		return 0;
	if(year<=3)
		return 1;
	return count(year-3)+count(year-1);
}
