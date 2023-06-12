#include "monster.h"
using namespace std;

class Thanos {
private:
    int stones=0;
    int hp;
public:

Thanos(int =0,int=1000); 
~Thanos(){cout<<"Thanos used his ultimate skill and kill himself"<<endl;}
    void snap_finger(monster[],int);
    void operator++();
    
};

void Thanos::snap_finger(monster[],int)
{
  if(stones==6)
  {
    cout<<"Thanos has "<< stones <<" stones"<<endl;
    cout<<"Thanos snap finger"<<endl;
  }
  else cout<<"Thanos has not enough stones"<<endl;
}
Thanos::Thanos(int st,int h)
{
  stones=st;
  hp=h;
}
void Thanos::operator++()
{
  stones++;
  cout<<"Thanos got "<< stones<<" stones" <<endl;
}