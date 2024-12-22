#include<iostream>

using namespace std;

int modularExponentiation(int a, int n, int m){
    int result = 1;
    while(n){
        if(n & 1){ //odd
            result = (result * (a)%m) % m;
        }
        a = ((a)%m * (a)%m) % m;
        n >>= 1; //dividing by 2
    }

}

int main(){
    int a,n,m;
    cout<<"Enter number, its exponentiation, and modulo respt. : ";
    cin>>a>>n>>m;

    int result = modularExponentiation(a,n,m);
    cout<<"Result is : "<<result;
}