#include <iostream>
using namespace std;

int & put(int n);//����������  �����������һ��int�ͣ���ķ�������Ҳ�ɣ������ã�������Ϊ��ֵ����ֵ��
int get(int n);//ȡ������ 

int vals[10];
int error=-1;//��ΪԽ��ʱ�Ĵ��� 
 
int main()
{
	put(0)=10;
	put(1)=20;
	put(9)=30;
	
	cout<<get(0)<<endl;
	cout<<get(1)<<endl;
	cout<<get(9)<<endl;
	
	put(12)=1;
	
	return 0;
}

int & put(int n)
{
	if(n>=0&&n<10)
		return vals[n];
	else
	{
		cout<<"range error in put() value!"<<endl; 
		return error; 
	}
		
}

int get(int n)
{
	if(n>=0&&n<10)
		return vals[n];
	else
		return error;
}
