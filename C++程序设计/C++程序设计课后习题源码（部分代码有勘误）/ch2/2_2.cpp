#include <iostream>
#include <iomanip>
using namespace std;

const double pi = 3.1415926;

int main()
{
  double radius1, radius2;
  cout << "please input two numbers:\n";
  cin >> radius1 >> radius2;

  cout << setw(10) << pi << setw(10) << radius1
       << setw(10) << (pi * radius1 * radius1) << endl
       << setw(10) << pi << setw(10) << radius2
       << setw(10) << (pi * radius2 * radius2) << endl;

  return 0;
}
