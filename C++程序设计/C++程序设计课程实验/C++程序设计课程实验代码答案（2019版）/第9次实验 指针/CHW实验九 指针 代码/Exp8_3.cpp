//дһ�����������ַ����ĳ��ȣ���main�����������ַ�����������䳤�ȡ� 
#include <iostream>
using namespace std;

int length(char *);               //int length(char *c) ��д*c����Ϊ������������ʡ�ԡ�����Ǻ�������Ͳ���ʡ�� 

int main() 
{
	char ch[100];        //����һ���ַ������飬����ַ��� 
	cout<<"�������ַ�����"<<endl;
	//cin>>ch;          //�Կո������ָ������� �����ԣ��ո��Ժ���ַ��������ڳ����ڡ� 
	cin.getline(ch,100);//������ո� 
	
	cout<<"�ַ�������Ϊ��"<<length(ch)<<endl;
	return 0;
}

int length(char *c )          //char c[];   
{
	int count=0;
	while(*c!='\0')         //*c���ǽ������Ļ�������ѭ���� 
	{
		count++;            //���˽�����������ַ�������1 
		c++;                //����ָ����һ����ַ
	}
		
	return count;
}
