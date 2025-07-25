// demonstrating base class pointer derived class object
#include <iostream>
using namespace std;

class Base{
    public :
    void base(){
        cout<<"base function called"; 
    }
    
}; 

class Derived : public Base{
    public: 
    void derived(){
        cout<<"Derived function called"; 
    }
    
}; 

int main() {
    // Write C++ code here
    
    // both functions will be called and executed 
    Derived d ; 
    d.derived(); 
    d.base(); 
    // base class pointer derived class object 
    
    Base *ptr = new Derived();
    ptr->base(); //possible 
    ptr->derived(); // not possible 
    
    
    

    return 0;
}