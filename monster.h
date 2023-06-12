#ifndef monster_h
#define monster_h
#include <iostream>
using namespace std;

class monster{
private:
	string name;
	int hp,potion;

public:
  bool operator==(monster x);
  monster(string = "za", int a=0 ,int b=0);
  void print();
  void operator++(){  hp+=10; potion-=10; }
  void operator+=(int a) {hp+=a;}
  void healing(){potion-=10; hp+=10; cout<<name<<" heal"<<endl;}
  void attack(monster & b);
  void ultimate(monster & b)
    {cout<<name<<" used ultimate skill to "<<b.name<<endl; 
      if(b.hp>1) 
        {
          b.hp=1;
        }
    }
  void kill(){cout<<name<<" is destroyed"<<endl;}

//void Attack(monster &); 
//void print(); // to print all data

~monster();
};

bool monster::operator==(monster x)
{
  return hp==x.hp && name==x.name && potion==x.potion;
}
monster::monster(string n, int a,int b){
   //set all values
  name=n;
  hp=a;
  potion=b;
}
monster::~monster(){}
void monster::print()
{
  cout<<"Name: "<<name<<endl;
  cout<<"HP: "<<hp<<endl;
  cout<<"Potion: "<<potion<<endl;
}
void monster::attack(monster & b)
{
  cout<<name<<" attack "<<b.name<<endl;
  if(b.hp>10) 
   {
      b.hp-=10;
   }
  else
  {
    b.hp=0;
    cout<<b.name<<" is dead"<<endl;
  }
}

#endif