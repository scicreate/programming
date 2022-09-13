//**********************
//**    ch15_1.cpp    **
//**********************

#include <iostream>
#include <cstring>
using namespace std;
class Student{
public:
  Student(char* pName ="no name")
  {
    cout <<"create one student\n";
    strncpy(name, pName,40);
    name[39]='\0';
    noOfStudents++;            //��̬��Ա��ÿ����һ������ѧ��������1
    cout <<noOfStudents <<endl;
  }
  ~Student()
  {
    cout <<"destruct one student\n";
    noOfStudents--;            //ÿ����һ������ѧ��������1
    cout <<noOfStudents <<endl;
  }
  static int number()          //��̬��Ա����
  {
    return noOfStudents;
  }
protected:
  static int noOfStudents;     //��д��noOfStudents=0;��Ƿ�
  char name[40];
};
int Student::noOfStudents =0;  //��̬���ݳ�Ա���������ռ�ͳ�ʼ��

void fn()
{
  Student s1;
  Student s2;
  cout <<Student::number() <<endl;  //���þ�̬��Ա��������������
}
int main()
{
  fn();
  cout <<Student::number() <<endl;  //���þ�̬��Ա��������������
}
