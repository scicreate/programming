//���Ƴ��򣬵��ô������õĲ�����ʵ�������ַ��������Ľ��� 
#include <iostream>
using namespace std;

void change(const char * &a,const char * &b);//��(const char *) &-ָ�������,��ȣ�int�� &��&a-���õ���ap,Ҳ����&a��һ��ap��ַ�����á�
int main()
{
	const char *ap="hello";
	const char *bp="how are you?";
	
	cout<<"����ǰ \nap:"<<ap<<"\nbp:"<<bp<<endl;
	
	change(ap,bp);	
	cout<<"������ \nap:"<<ap<<"\nbp:"<<bp<<endl;
	
	return 0; 
}

void change(const char * &a,const char * &b)
{
	const char *  temp;         //����Ҫ��const char * &a��const char * &b����һ�£�����ᱨ��
	temp=a;
	a=b;
	b=temp; 
} 

