//4.1 ��1�ֽⷨ 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double sum=1,temp,x;
	cout<<"������x��ֵ"<<endl;
	cin>>x;
	
	int n=1;
	double k=x;//����
	int sign=1;//����
	double d=1;//��ĸ  ��Ϊ int 13!�׳���� �油�� ����temp���޴� double
	temp=x;	
	
	
	/*
	//while���
	//n=1;
	while(fabs(temp)>1e-8)
	{
		sum+=temp;
		n++;
		k*=x;
		sign*=-1;
		d*=n;
		temp=k*sign/d;				
	}
	*/

	/*
	//do...while���
	//n=1;
	if(fabs(temp)>1e-8)//��ֹ�û����������x��ֵС�� 1e-8 
	{
		do
		{
			sum+=temp;
			n++;
			k*=x;
			sign*=-1;
			d*=n;
			temp=k*sign/d;
		}while(fabs(temp)>1e-8);
	}		
	*/

	///*
	//for���	
	for(n=2;fabs(temp)>1e-8;n++)
	{
		sum+=temp;		
		k*=x;
		sign*=-1;
		d*=n;
		temp=k*sign/d;		
	}
	//*/

	cout<<"sum="<<sum<<endl;
	
	return 0;	
}


//	for(int i=1;i<=14;i++)
//	{
//		sign=sign*i;
//		cout<<i<<"!="<<sign<<endl;
//	} 
//	int i=2147483648;12��=479001600 13!=6227020800 
//	cout<<i;
