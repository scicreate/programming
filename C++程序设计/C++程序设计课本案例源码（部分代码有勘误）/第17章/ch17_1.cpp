//**********************
//**    ch17_1.cpp    **
//**********************

#include<iostream.h>

class Bed{
public:
  Bed() :weight(0){}
  void Sleep(){ cout <<"Sleeping...\n"; }
  void SetWeight(int i){ weight =i; }
protected:
  int weight;
};

class Sofa{
public:
  Sofa() :weight(0){}
  void WatchTV(){ cout <<"Watching TV.\n"; }
  void SetWeight(int i){ weight =i; }
protected:
  int weight;
};

class SleeperSofa :public Bed, public Sofa{
public:
  SleeperSofa(){}
  void FoldOut(){ cout <<"Fold out the sofa.\n"; }
};

void main()
{
  SleeperSofa ss;
  ss.WatchTV();
  ss.FoldOut();
  ss.Sleep();
  cin.get();
}
