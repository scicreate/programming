//8.1

#include <iostream>
using namespace std;

int* findmax(int * array, int size, int* index);  //������һ��int�͵�ָ�롣int * array=int array[] 

int main()
{
	int a[]={33,91,54,67,82,37,85,63,19,68};
	int *maxaddr;//������Ԫ�صĵ�ַ
	int idx;//Ԫ���±�

	maxaddr=findmax(a,sizeof(a)/sizeof(*a),&idx); //���õĶ��ּ������鳤�ȵ�д�� 

	cout<<"the index of maximum element is "<<idx<<endl
		<<"the address of it is "<<maxaddr<<endl
		<<"the value of it is "<<a[idx]<<endl
		<<&a[1]<<endl;//���ڼ��maxaddr�������Ƿ���ȷ 
	
	return 0;
}

int * findmax(int *array, int size, int* index)
{
	
  //����1
	*index=0;                       //����ʹ��*��ȡֵ����˼����0�����Ÿ�ֵ����ַindexָ��Ŀռ䡣 
	for(int i=1;i<size;i++)
		if(array[i]>array[*index])
			*index=i;             
	return &array[*index];/**/   

//  ����2
	/*int max=array[0];
	*index=0;
	for(int i=1;i<size;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
			*index=i;
		}
	}
	//return &max;//��             //max��array�ĵ�ַ��һ����max��һ���µĵ�ַ����Ȼ��ŵ�ֵ��һ���ģ����ǵ�ַ��һ�� 
	return &array[*index];*/
}
