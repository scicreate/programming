//8.6

#include <iostream>
using namespace std;

char * my_strcpy(char * dest, const  char * source);

int main()
{
	char ch1[100];//="abczzzzzz";//abc//{'a','b','c','d','e','f'} 
	char ch2[]="eeeee";//Ҳ����cin>>ch2;			

	//char *ch1="abc";
	//char *ch2="abdef";

	cout<<my_strcpy(ch1,ch2)<<endl;
	
	return 0;	
}

char *my_strcpy(char * dest,const char *source)
{
	//char * src=(char *)source;//Ϊ��ֹ*sourceֵ���ı䣬���Կ��Ǽ���һ��			
	char *pdest=dest;//��Ҫ����dest�����еĵ�ַ����ch1���׵�ַ���������dest��ַһֱ������ 
	                  //���صĵ�ַ�Ǹ��Ƶ����һ���ַ���ĵ�ַ�����ܷ������и����ַ�
	//while(*pdest && *source)//��dest��source�о���Ϊ\0��������ƣ���Ϊ�Ż�����ֹpdest�����   
	while(*source)//��pdest����û�����ݣ���Ҫ������д 
		*(pdest++)=*(source++);	
	
	//while(*pdest)//strcpy�Ǹ��ǵ�Ч�����������source�л�ȡ�ַ���dest�л��в������ַ�������\0�滻 
		*pdest='\0';//*pdest++='\0';		
			
	return dest;
}
