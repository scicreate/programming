//4.4

#include <iostream>
using namespace std;

int main()
{
	for(int i=1;i<=1000;i++)
	{
		int sum=0;//sum�ĳ�ʼ������Ҫ
		for(int j=1;j<=i/2;j++)  //j������һ�뼴�ɡ� 
		{
				if(i%j==0)
				sum+=j;//sum=sum+j; 
			}
		if(sum == i)
			cout<<i<<"������"<<endl;
	}
	
	return 0;	
}
