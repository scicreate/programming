//7.4�Ľ�ð������ʹ֮����һ�ֵıȽ�����û�з���Ԫ�ؽ���������Ϊ��������ϡ� 
#include <iostream>
#include <iomanip>
using namespace std;
void bubble(int [],int);
int main()
{
	int len,i,j;
	int *array;      
	
	cout<<"Ҫ�Ƚ϶��ٸ�����";
	cin>>len;

	if((array=new int[len])==NULL)
	{
		cout<<"error!"<<endl;
		exit(1);
		//return 1;
	}

	cout<<"������Ҫ�������������"<<endl;
	
	i=0;

	while(cin>>array[i])
	{
		i++;			
		if (i==len)
			break;					
	}

	cout<<"����ǰΪ��"<<endl;
	for(j=0;j<i;j++)
		cout<<setw(3)<<"array["<<j<<"]= "<<array[j]<<endl;

	bubble(array,i);
	delete[]array;
	
	return 0;
}

void bubble(int a[],int size)
{
	int i,temp,flag;

	//for(int pass=1; pass<size&&flag; pass++) //ɾ��flag==0���ж� 
	for(int pass=1;pass<size;pass++)
	{	
		flag=0;
		for(i=0;i<size-pass;i++)
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				flag++;
			}	
			
		if(flag==0)
			break;
			
		cout<<"��"<<pass<<"�˱ȽϽ����";
		for(i=0;i<size;i++)
			cout<<a[i]<<",";
		cout<<endl;		
	}	
}
