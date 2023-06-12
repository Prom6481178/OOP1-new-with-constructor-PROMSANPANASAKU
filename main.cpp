#include <iostream>
using namespace std;
#include "thanos.h"
#include "monster.h"

int main(int argc, char* argv[]) {
  monster *p=new monster("Superman",50, 50);
  monster A("Batman",40,60);
  A.print();
  p->print();

  Thanos T;
  int n;
  //cout<<"How many monsters? ";
  //cin>>n;

  monster *m=new monster[2]; //make sure they have hp

  
  /* Add some story*/
  cout<<endl;
  ++T;
  A.attack(*p);
  T.snap_finger(m,n);
  cout<<endl;
  A.print();
  p->print();
  cout<<endl;
  ++T;
  p->healing();
  T.snap_finger(m,n);
  cout<<endl;
  A.print();
  p->print();
  cout<<endl;
  ++T;
  p->attack(A);
  T.snap_finger(m,n);
  cout<<endl;
  A.print();
  p->print();
  cout<<endl;
  ++T;
  A.healing();
  T.snap_finger(m,n);
  cout<<endl;
  A.print();
  p->print();
  cout<<endl;
  ++T;
  p->ultimate(A);
  T.snap_finger(m,n);
  cout<<endl;
  A.print();
  p->print();
  cout<<endl;
  A.ultimate(*p);
  T.snap_finger(m,n);
  cout<<endl;
  A.print();
  p->print();
  cout<<endl;
  ++T;
  T.snap_finger(m,n);
  p->print();
  cout<<endl;
  A.kill();
  int i;
  for(i=0;i<n;i++)
      m[i].print();
  

  delete [] m;

}

  
  