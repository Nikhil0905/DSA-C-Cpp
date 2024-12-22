#include<iostream>
using namespace std;

class A{
    int x;
    public:
    A(int a){
        x = a;
        cout<<"\nCalling Base class Constructor"<<x<<endl;
    }
    ~A(){
        cout<<"\nCalling Base class Destructor \n";
    }
};

class B : public A{
    int l;
    public:
    B(int p): A(p){
        l = p;
        cout<<"\nCalling derived class parameterized Constructor\n";
    }
    ~B(){
        cout<<"\nCalling derived class constructor\n";
    }
};

int main(){
    B obj2(1);
}