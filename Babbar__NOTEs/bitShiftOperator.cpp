#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

   
    cout<<"a RIGHT SHIFT b : "<< (a>>b)<<endl;      //Right shift (Divides by 2 every time).
    
    cout<<"a LEFT SHIFT b : "<<(a<<b)<<endl;        //Left Shift (multiplies by 2 every time)
                                                    //May get negative number if shifts upto 32nd bit.
    
}