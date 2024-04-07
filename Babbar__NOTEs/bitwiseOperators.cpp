#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

   
    cout<<"a AND b : "<< (a&b)<<endl;
    cout<<"a OR b : "<<(a|b)<<endl;
    cout<<"NOT of a : "<<(~a)<<", NOT of b : "<<(~b)<<endl;
    cout<<"a XOR b : "<<(a^b)<<endl;

}