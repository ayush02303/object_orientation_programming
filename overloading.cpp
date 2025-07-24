// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

class Complex{
    private :
    
    int real ; 
    int imaginary; 
    
    public: 
    
    Complex( int r= 0 , int c = 0){
        real = r;  
        imaginary = c;  
    }
    
    void display(){
        cout<<"imaginary root is "<<imaginary<<" and real is  "<<real;
    }
    
    Complex operator+( Complex x ){
        Complex temp; 
        
        temp.real = real + x.real; 
        temp.imaginary = imaginary + x.imaginary; 
        
        return temp; 
    }
    
    
};

int main() {
    // Write C++ code here
    Complex c1(12,10), c2(12,12), c3; 
    c3 = c1+c2; 
    c3.display(); 

   

    return 0;
}