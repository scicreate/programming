//5_8

#include <iostream>
using namespace std;

void display(double d){ cout <<"A double: " <<d <<endl; }
void display(int i){ cout <<"A int: " <<i <<endl; }
void display(char c){ cout <<"A char: " <<c <<endl; }

int main()
{
	double a=100.0;
	float f=1.0;
	int n=120;
	char ch='c';
	short s=50;
	display(a);//double
	display(f);//float �ϸ�ƥ��double
	display(n);//int
	display(ch);//char
	display(s);//short int �ϸ�ƥ�� int
	//int��ת����long��intҲ��ת����double

	
	return 0;
}




