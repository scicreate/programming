//7.2

#include <iostream>
using namespace std;

int insert(int array[],int size,int insertNum);

int main()
{
	int a[]={15,22,34,43,56,69,72,89,91,102};
	int n=sizeof(a)/sizeof(*a);

	int value;
	cout<<"������Ҫ�������ֵ:";
	cin>>value;

	cout<<"����ǰ�����飺"<<endl;
	int i;
	for(i=0;i<n;i++)
		cout<<"a["<<i<<"]= "<<a[i]<<endl;
	
	cout<<endl;

	cout<<"�������������Ϊ��"<<insert(a,n,value)<<endl;

	cout<<"���������飺"<<endl;
	for(i=0;i<n;i++)
		cout<<"a["<<i<<"]= "<<a[i]<<endl;
		
	return 0;
}

int insert(int array[],int size,int insertNum)
{
	if(insertNum>=array[size-1])//������������ڵ��������е����һ��Ԫ��ֵ���򱻼����������Ϊ������
		return insertNum;

	//������������������򱻼����������Ϊ��ԭ�����е����һ��Ԫ��
	int temp=array[size-1];
	int j;	
	for (j=size-2;j>=0 && array[j]>insertNum;j--)//�Ӻ���ǰ�Ƚϣ��ҳ�insertNum�����λ��
	{
		array[j+1]=array[j];//��������
	}

	array[j+1]=insertNum;

	return temp;
}
