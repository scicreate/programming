#include <iostream>//chw:#include <iostream.h>
#include <cmath>//chw:#include <math.h>
using namespace std;//chw:���� 

class Point
{
	public:
		void Set(double ix,double iy)//�������� 
		{
			x=ix;
			y=iy;
		}
		
		double xOffset()//chw:ȡy��������� ��Ϊx 
		{
			return x;
		}
		double yOffset()//chw:ȡx��������� ��Ϊy 
		{
			return y;
		} 
		
		double angle()//ȡ��ļ������ 
		{
			return (180/3.14159)*atan2(y,x);//�����ص��Ƿ�λ�ǣ�Ҳ�������Ϊ���㸴�� x+yi �ķ��ǣ�����ʱatan2 �� atan �ȶ�
		}
		
		double radius()//ȡ��ļ�����뾶 
		{
			return sqrt(x*x+y*y); 
		}
	protected:
		double x;//x�����
		double y;//y����� 
};
int main()
{
	Point p;
	double x,y;
	
	cout<<"Enter x and y:\n";
	cin>>x>>y;
	
	p.Set(x,y);
	//p.x+=5;
	//p.y+=6;//chw:���ݳ�Աx��y�ķ���Ȩ����protected����˲������������
	
	cout<<"angle="<<p.angle()
		<<",radius="<<p.radius()
		<<",x offset="<<p.xOffset()
		<<",y offset="<<p.yOffset()<<endl;//chw:"endl; 
	return 0;
}
