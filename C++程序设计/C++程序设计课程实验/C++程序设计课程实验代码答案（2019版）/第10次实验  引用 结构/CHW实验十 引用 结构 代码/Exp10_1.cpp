#include <iostream>
using namespace std;

struct Student
{
	int midScore;              //�ṹ��ĳ�Ա�������߽ṹ������ԡ�
	int finalScore;	
};

int main()
{
	cout<<"������ѧ������ѧ���гɼ�����ĩ�ɼ�"<<endl;
	Student stu;   //�ṹ�����stu
	cin>>stu.midScore>>stu.finalScore;
	
	cout<<"ƽ���ɼ�Ϊ��"<<(stu.midScore+stu.finalScore)/2.0<<endl; 
	
	return 0;
}

