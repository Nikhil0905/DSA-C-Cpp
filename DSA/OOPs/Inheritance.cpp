#include<iostream>
using namespace std;

class Human{
    private:
        int age;

    public:
        int weight;
        int height;

    public:
        
        int getAge(){
            return this->age;
        }
        int setAge(int a){
            return this->age = a;
        }

        int setWeight(int w){
            return this->weight = w;
        }
};

class Male: public Human{
    private:
    string nationality;

    public:
    string getNationality(){
            return this->nationality;
        }
        
    string setNationality(string n){
        return this->nationality = n;
    }

};

int main(){
    Male Nikhil;
    Nikhil.setWeight(60);
    //public vaale print kr rha huin.
    cout<<"Weight of Nikhil is : "<<Nikhil.weight<<endl;

    //private waale print kr rha huin.
    Nikhil.setNationality("Indian");
    cout<<"Age of Nikhil when not set : " <<Nikhil.getAge()<<endl;
    cout<<"He belong to the Nationality : " <<Nikhil.getNationality()<<endl;
    
    Nikhil.setAge(19);
    cout <<"Age of Nikhil after using set function is : " <<Nikhil.getAge()<<endl;

    Nikhil.sleep();

    return 0;
}