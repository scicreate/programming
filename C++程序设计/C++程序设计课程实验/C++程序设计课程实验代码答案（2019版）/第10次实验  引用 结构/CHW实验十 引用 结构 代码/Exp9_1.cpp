#include <iostream>
using namespace std;

const int asize=10;

void findmax(int *a, int num, int i, int *pk);
void findmax(int *a,int num,int &index); 

int main()
{
	int a[asize];
	int index=0;             //�±� 
	int count=0; 
	cout<<"please input "<<asize<<" data:\n";	 
	
//	for(int i=0;i<size;i++)	
//		cin>>a[i];//��ͨ��ctrl+z��ֹ����		
//	
//	//findmax(a,size,0,&index); //ԭ�� 
//	findmax(a,size,index);	
	
	///*
	for(int i=0;i<asize&&cin>>a[i];i++)//�Իس���ֹ����
		count++;//��������10��
		
	
	findmax(a,asize,index);	//findmax(a,count,index);
    //*/findmax(a, asize, 0, &index);
	
	cout<<"the maximum is "<<a[index]<<endl
		<<"It's index is "<<index<<endl;//�������ֵ�±�
	
	return 0; 
}

void findmax(int *a, int num, int i, int *pindex)  //num=asize,i=0,*pk������Ԫ�ص��±�
{
	if(i<num)//i�±��0��numԪ���ܸ���
	{
		if(a[i]>a[*pindex])
			*pindex=i;
		findmax(a,num,i+1,&(*pindex));
	}
}

void findmax(int *a,int num,int &index) //&index��������ַ���ݺʹ��ݵĲ�����ͬһ����ַ������Ҫ���ء�����������ã��õ���ֵ���ݣ���ַ�ǲ�һ���ġ�
{
	for(int i=0;i<num;i++)
		if(a[i]>a[index])
			index=i;
}
