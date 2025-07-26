// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Base{
    public : 
    static int count; 
    Base(){
        int a = 12; 
        count+=1; 
    }
    
}; 

int Base :: count = 0 ;

int main() {
    Base b,b1;
    cout<<b.count;
   
}