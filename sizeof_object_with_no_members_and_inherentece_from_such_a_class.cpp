#include<stdlib.h> 
#include<iostream> 
  
using namespace std; 
  
struct A {};
struct B { A a1; A a2; };
struct C : B { A a1; A a2; };
  
int main() 
{   A *a_=new A();
    A a=A();
    B b=B();
    C c=C();
    int i=1;
    cout<<sizeof(i)<<endl;
    cout<<sizeof(a_)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    return 0; 
} 
