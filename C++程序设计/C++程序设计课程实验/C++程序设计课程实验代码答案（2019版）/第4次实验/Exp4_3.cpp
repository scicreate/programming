//4.3

#include <iostream>
using namespace std;

int main()
{
	for(int i=1;i<=9;i++)//Ҫ�������λ����ˮ�ɻ�������˰�λ����Ϊ0
		for(int j=0;j<=9;j++)
			for(int k=0;k<=9;k++)
				if(i*i*i+j*j*j+k*k*k == 100*i+10*j+k )
					cout<<"ˮ�ɻ�����"<<100*i+10*j+k<<endl;
	
	return 0;
}
