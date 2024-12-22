#include<iostream>
using namespace std;

class A {

    public:
    void sayHello(){
        cout<<"Hello world"<<endl;
    }
    void sayHello(string name){             //multiple input parameter.
        cout<<"Hello world"<<name<<endl;
    }
    void sayHello( char name){           //different input parameter datatype.
        cout<<"Hello world"<<name<<endl;
    }

    //can also use default arguments
};


int main(){
    A obj;
    obj.sayHello();

    return 0;
}