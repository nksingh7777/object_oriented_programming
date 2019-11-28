#include<stdlib.h> 
#include<iostream> 
  
using namespace std; 
  
class Test { 
public: 
    //may be since in cpp data type is defined for variable not value, 
    // it just needs the amount of memory an object requires and thus returns void* pointer to that memory.
    void* operator new(size_t size);
    void operator delete(void*); 
    Test() { cout<<"\n Constructor called"; } 
    ~Test() { cout<<"\n Destructor called"; } 
}; 
  
void* Test::operator new(size_t size) 
{ 
    cout<<"\n new called"; 
    void *storage = malloc(size); 
    return storage; 
} 
  
void Test::operator delete(void *p ) 
{ 
    cout<<"\n delete called"; 
    free(p); 
} 
  
int main() 
{ 
    Test *m = new Test(); 
    delete m; 
    return 0; 
}  
