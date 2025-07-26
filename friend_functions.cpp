// friend function demonstration 
#include <iostream>
using namespace std; 

class Base{
    public : int a = 10 ; 
    private: int b = 12; 
    protected: int c = 13; 
    
    // friend function
    friend void func(); 
    
}; 

void func(){
    Base bs; 
    cout<<bs.a<<" "<<bs.b<<" "<<bs.c; 
    
}



int main() {
    
    func();
    
  
}