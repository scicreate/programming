#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"��ȷ�������ģ��"<<endl;
	cin>>n;
	
	int **array=new int*[n];   //?
	for(i=0;i<n;i++)	
		array[i]=new int[n];   //?
		
	cout<<"������"<<n<<"�׾���ľ�������"<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>array[i][j];
	
	cout<<"�����"<<n<<"�׾���ľ�������Ϊ"<<endl;
	for(i=0;i<n;i++)
	{ 
		for(j=0;j<n;j++)
			cout<<setw(6)<<array[i][j];
		cout<<endl; 
	}
	
	//���������Խ���Ԫ��֮��
	int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)//��Խ��� 
				sum+=array[i][j];
			if((i+j)==(n-1))//�ҶԽ��� 
				sum+=array[i][j];
		}
	}
	
	if(n%2!=0)
		sum-=array[(n-1)/2][(n-1)/2];//����ģΪ�������򽻲�㴦����ֵ���ظ����� 
	
	cout<<"�����Խ��ߵĺ�Ϊ"<<sum<<endl; 
	
	return 0;	
}
