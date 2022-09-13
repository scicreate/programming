//*********************
//**    ch8_6.cpp    **
//*********************

#include <iostream.h>

int sum1,sum2,sum3,sum4,sum5;    //存放每种方法的结果

int iArray[]={1,4,2,7,13,32,21,48,16,30};    //全局数组
int* iPtr;

void main()
{
  int size,n;
  size=sizeof(iArray)/sizeof(*iArray);    //元素个数

  for(n=0; n<size; n++)      //方法1
    sum1 += iArray[n];

  iPtr=iArray;
  for(n=0; n<size; n++)      //方法2
    sum2 += *iPtr++;

  iPtr=iArray;       //此句不能省略，因为方法2修改了iPtr
  for(n=0; n<size; n++)     //方法3
    sum3 += *(iPtr+n);

  iPtr=iArray;      //此句可以省略，因为方法3没有修改iPtr
  for(n=0; n<size; n++)    //方法4
    sum4 += iPtr[n];

  for(n=0; n<size; n++)    //方法5
    sum5 += *(iArray+n);

  cout <<sum1 <<endl
       <<sum2 <<endl
       <<sum3 <<endl
       <<sum4 <<endl
       <<sum5 <<endl;
}
