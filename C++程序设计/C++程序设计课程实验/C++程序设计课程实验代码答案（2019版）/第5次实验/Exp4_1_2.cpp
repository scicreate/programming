//4.1

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double sum=1,temp,x;
	cout<<"������x��ֵ"<<endl;
	cin>>x;
	temp=x;
	int n=1;	
	
	
	///*
	//while���
	//n=1;
	while(fabs(temp)>1e-8)
	{
		sum+=temp;
		n++;
		temp=temp*(-1)*x/n;		
		
	}
	//*/

	///*
	//do...while���
	//n=1;
	if(fabs(temp)>1e-8)//��ֹ�û����������x��ֵС�� 1e-8 
	{
		do
		{
			sum+=temp;
			n++;
			temp*=(-1)*x/n;
		}while(fabs(temp)>1e-8);
	}
		
	//*/

	/*
	//for���
	
	for(n=2;fabs(temp)>1e-8;n++)
	{
		sum+=temp;		
		temp*=(-1)*x/n;		
	}
	*/

	cout<<"sum="<<sum<<endl;
	
	return 0;	
}
