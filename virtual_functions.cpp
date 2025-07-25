
#include <iostream>
using namespace std; 

class Basic{
    public : 
    // virtual function
    virtual void display(){
        cout<<"this function is under class basic"; 
    }
    
};
class Advanced : public Basic{
    public: 
    // function overriding
    void display(){ 
        cout<<"Following function is under advanced"; 
    }
    
};

int main() {
    
   Advanced a ; 
   Basic *ptr = &a; // base class ptr, derived class object
   ptr->display(); 

    return 0;
}