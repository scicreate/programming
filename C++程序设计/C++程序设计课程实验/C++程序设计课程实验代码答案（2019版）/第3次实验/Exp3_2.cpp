//Please input the radius of the ball.
#include <iostream>
using namespace std;

int main()//double main()
{
	double r, s, v, m, pi, p;
	//r radius��s ����� superficialArea��v ��� volume��m ���� mass�� 
 
	
	cout<<"Please input the radius of the ball\n";//cout << "r = " ;
	cin >> r;      //������İ뾶
    
	pi = 3.14;
	p = 7.8;
	s = 4 * pi * r * r;    //����ı����
	v = 4/3 * pi * r * r * r;     //��������  4.0/3 
	m = p * v;        //���������
    
	cout << "s = "<< s << endl;
	cout << "v = "<< v << endl;
	cout << "m = "<< m << endl;
	
	return 0;//�� 
}	

