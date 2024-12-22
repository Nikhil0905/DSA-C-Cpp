#include<iostream>
using namespace std;

class Female{

    public:
        int age;

        int getAge(){
            return this->age;
        }
        int setAge(int a){
            return this->age = a;
        }
};

class Male{
    public:
        int age;
        
        int getAge(){
            return this->age;
        }
        int setAge(int a){
            return this->age = a;
        }
};

class Human: public Male, public Female{

};

int main(){
    Human A;
    cout<<A.Male::age<<endl;        //age value of Male class is returned.
    cout<<A.Female::age<<endl;        //age value of Female class is returned.

    return 0;
}