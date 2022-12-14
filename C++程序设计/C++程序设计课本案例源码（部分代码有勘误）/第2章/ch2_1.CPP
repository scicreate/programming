//*********************
//**    ch2_1.cpp    **
//*********************

#include <iostream.h>
#include <iomanip.h>  //要用到格式控制符

void main()
{
  double amount = 22.0/7;
  cout <<amount <<endl;
  cout <<setprecision(0) <<amount <<endl
       <<setprecision(1) <<amount <<endl
       <<setprecision(2) <<amount <<endl
       <<setprecision(3) <<amount <<endl
       <<setprecision(4) <<amount <<endl;

  cout <<setiosflags(ios::fixed);
  cout <<setprecision(8) <<amount <<endl;

  cout <<setiosflags(ios::scientific) <<amount <<endl;

  cout <<setprecision(6);    //重新设置成原默认设置
}
