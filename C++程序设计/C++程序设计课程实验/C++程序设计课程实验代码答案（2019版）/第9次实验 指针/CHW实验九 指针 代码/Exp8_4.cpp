//���û�����һ���ַ����ո�ָ��Ķ�����ʣ���Ȼ�����ÿһ�����ʣ�ÿ��һ�����ʣ���
#include <iostream>
#include <cstring>
using namespace std;

int main()
{

/*	//�㷨1 
	char ch;             
    while(cin.get(ch))     
	//while(cin.get(ch) && ch != '\n')          //��cin>>��ʶ��س���\n�����ûس�����ѭ���� 
	{
		if(ch==' ')	
		{
			cout<<endl;
			continue; //���ǿո�ͽ�������ѭ����������ո�Ȼ�����������һ��whileѭ�� 
		}			
		cout<<ch;		
	}
	//*/
	
	
	//�㷨2 
	char ch[100];
	cout<<"�������ַ�����"<<endl;
	//cin>>ch;                      //cin��ʶ��ո�       
	cin.getline(ch,100); 
	cout<<ch<<endl;                 // �ַ�������ֱ��cout.��Ϊ�ַ�������\0�����ģ������Կո���������Կ�������ո� 
	cout<<strlen(ch)<<endl;          // strlen�����ǿ⺯������Ӧ�⺯�� cstring
		
	for(int i=0;i<strlen(ch);i++)    
	{
		if(ch[i]==' ')
		{
			cout<<endl;			
			continue;//��������ѭ���壬ֱ�ӽ���forѭ����i++;Ŀ�ģ��ո����������i��1����ȡ�ո������ַ������� 
		}			
		cout<<ch[i];		
	}
	
	
	/*
	//�㷨3 �� 
	string s;            // 
	getline(cin,s);	
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')//if(s.at(i)==' ')
		{
			cout<<endl;
			continue;
		}			
		cout<<s[i];//s.at(i);
	} 
	cout<<endl;	
	*/

	return 0; 
}
