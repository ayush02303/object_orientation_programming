
#include <iostream>
using namespace std;

class Base{
    public :
    Base(){
        cout<<"non para. of Base"; 
    }
    Base( int x){
        cout<<"Para. of Base";
    }
    
}; 
class Derived : public Base{
    public :
    Derived(){
        cout<<"non para. of Derived"; 
    }
    Derived( int y){
        cout<<"Para. of Derived"; 
    }
    
}; 

int main() {
    // Write C++ code here
   Derived d;

    return 0;
}