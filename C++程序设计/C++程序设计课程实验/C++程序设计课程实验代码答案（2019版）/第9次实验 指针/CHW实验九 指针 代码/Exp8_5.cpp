//8.5

#include <iostream>
using namespace std;

int strcmp(const char * str1,const char * str2);        //const��ʾchar�����ݲ��ܸģ�ֻ���� 

int main()
{
	char *ch1,*ch2;
	int num;
	
	cout<<"��һ���ַ����ĳ��ȣ�"<<endl;
	cin>>num;
	if((ch1=new char[num+1])==NULL)           //ch1��ָ�룬û�з���ռ䣬�޷���ű���������ݣ�����newһ�£���������ڴ档 
	{
		cout<<"failed!"<<endl;
		exit(1);
	}

	cout<<"�������һ���ַ�����"<<endl;
	cin>>ch1;
	//cout<<"������ǣ�"<<ch1<<endl; 

	cout<<"�ڶ����ַ����ĳ��ȣ�"<<endl;
	cin>>num;
	if((ch2=new char[num+1])==NULL)
	{
		cout<<"failed!"<<endl;
		exit(1);
	}

	cout<<"������ڶ����ַ�����"<<endl;
	cin>>ch2;/**/
	//cout<<"������ǣ�"<<ch2<<endl; 
	
/*
	char *ch1,*ch2;
	//cin>>ch1>>ch2;//����
	
	ch1="ab";
	ch2="abfde";
*/
	cout<<strcmp(ch1,ch2)<<endl;

	delete [] ch1;
	delete [] ch2;/**/
	
	return 0;
}

int strcmp(const char *str1,const char * str2)//������ò����޸�
{
	while(*str1&&*str2&&(*str1==*str2))//str1��str2������\0ʱ����\0����������ַ����ַ����ʱ��һֱѭ����ֱ���ҵ�����ȵ��ַ�Ϊֹ��==���ȼ�����&&��while((*str1!='\0')&&(*str2!='\0')&&(*str1==*str2))
	{                                  //ѭ�����������ǣ���������������һ�� ���Ƚ��ַ������������Ϊ���ȱȽϳ��ȡ� 
		str1++;
		str2++;
	}
	return *str1-*str2;
	//abc  ad
	//ad   abc
	//abc  ab
	//ab   abc  ������Ҫ�ж��Ƿ�Ϊ'\0'
	//ab   ab   ����Ҫ�ж�'\0',����whileѭ�������������±��Խ��
}
