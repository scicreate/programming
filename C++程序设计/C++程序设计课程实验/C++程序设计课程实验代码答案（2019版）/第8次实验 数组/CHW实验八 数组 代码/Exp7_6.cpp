//7.6
#include <iostream>
using namespace std;

void max(int score[][4],int pupil,int test);
void fail(int score[][4],int pupil,int test);
void average(int score[],int size);
void average(int score[][4],int pupil,int test);


int main()
{
	/*
	int array[5][4]={{23,98,65,96},
					{76,64,93,100},
					{91,88,99,43},
					{60,90,77,59},
					{32,55,90,70}};
	*/

	///*
	int array[][4]={{23,98,100,96},
					{76,100,93,100},
					{91,88,99,43},
					{60,100,77,59},
					{32,55,90,70}};
	//*/
	max(array,5,4);
	fail(array,5,4);
	//average(array[0],20);
	//average(&array[0][0],20);
	average(array,5,4);
	
	return 0;
}

void max(int score[][4],int pupil,int test)
{	
	int i,j,max=score[0][0];
	for(i=0;i<pupil;i++)
		for(j=0;j<test;j++)
			if(score[i][j]>max)
				max=score[i][j];

	for(i=0;i<pupil;i++)//��ֹһ��ѧ������߷�
		for(j=0;j<test;j++)
		{
			if(score[i][j]==max)
			{
				cout<<"��"<<i+1<<"ѧ��"<<"��"
					<<"��"<<j+1<<"�ųɼ�"
					<<"����߷�"<<endl;
			}			
		}

	/*//��߷ֽ���һ���������
	int p=0,t=0;
	for(i=0;i<pupil;i++)
		for(j=0;j<test;j++)
			if(score[i][j]>score[p][t])
			{	
				p=i;
				t=j;				
			}*/
	/*
	cout<<"��"<<p+1<<"ѧ��"<<"��"
		<<"��"<<t+1<<"�ųɼ�"
		<<"����߷�";
	*/  	

	cout<<endl;
}

void fail(int score[][4],int pupil,int test)
{
	for(int i=0;i<pupil;i++)
		for(int j=0;j<test;j++)
		{
			if(score[i][j]<60)
			{
				cout<<"�������ѧ�������"<<i+1<<", "
					<<"ta��4�ſγɼ�Ϊ��";
				for(int k=0;k<test;k++)
					cout<<score[i][k]<<",";
				cout<<endl;
				break;//����һ�����ϳɼ������񣬴����ɱ����ظ����
			}		
		}	
}

void average(int score[],int size)//���пγ̵���ƽ���� 
{
	int sum=0;
	for(int i=0;i<size;i++)
		sum+=score[i];

	cout<<"ƽ����Ϊ��"<<sum/double(size)<<endl;

}

void average(int score[][4],int pupil,int test)
{
	int sum;
	for(int i=0;i<test;i++)//ÿһ�ſε�ƽ���ɼ�����Ҫȡ����ͬѧ����ĳһ�ſεĳɼ�
	{
		sum=0;
		for(int j=0;j<pupil;j++)
			sum+=score[j][i];
		cout<<"��"<<i+1<<"�ſε�ƽ����Ϊ��"<<sum/double(pupil)<<endl;
	}
		
}

