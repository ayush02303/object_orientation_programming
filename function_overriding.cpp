// function overriding
#include <iostream>
using namespace std; 

class Base{
    public :
    void func(){
        cout<<"Base class function called"; 
    }
    
}; 
class Derived : public Base{
    public : 
    // function with same name in derived class 
    void func(){
        cout<<"Derived class function called"; 
    }
    
};

int main() {
    Derived d; 
    d.func(); 
   
}