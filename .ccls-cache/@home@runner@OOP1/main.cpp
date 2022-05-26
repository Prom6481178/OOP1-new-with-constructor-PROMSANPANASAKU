#include <iostream>
using namespace std;

#include "student.h"

int main() {
/*  student s1,s2;

 // s1.name="PUN";  // ERROR, it is in private
    s1.set_name("Pun");  	s1.set_age(20); 
		s2.set_name("Joe");
		s2.set_age(27); 
		
    s1.get_age()>s2.get_age() ?
    s1.print_name(): s2.print_name(); 
   if( s1.get_age()>s2.get_age() )
     s1.print_name();
       else  s2.print_name(); 
      cout <<"is older"<<endl;
*/
     student Cst[10],*p;
     int i;
     string n;
     for(i=0;i<3;i++){
         cout<<"What is your name?";
         cin>>n;
         Cst[i].set_name(n);
     }
    for(i=0;i<3;i++){
       
         Cst[i].print_name();
     }
    cout<<endl;
    cout<<"Pointer"<<endl;
    p=&Cst[2];
    (*p).print_name();
    p->print_name();
    (p-1)->print_name();
}

//CST --> Joe  Jim Jan*