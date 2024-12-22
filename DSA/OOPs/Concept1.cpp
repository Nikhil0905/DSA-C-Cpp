#include<iostream>
using namespace std;

class Hero{

    //properties of Class
    
    private:        //default if if not set private.
    int health;

    public:
    char level;

    // Defalut Constructor
        Hero() {
            // Initializing properties with default values
            health = 100;
            level = 'Z'; // Default level if not set
        }

    //Getter
    int getHealth(){
        return health;           //USED TO ACCESS PRIVATE PROPERTIES.
    }
    char getLevel(){
        return level;
    }

    //Setter
    void setHealth(int h){
        health = h;
    }
    void setLevel(char lvl){
        level = lvl;
    }
};

int main(){

    //Object Inheritance

// 1. Static Allocation
    Hero Jeevan;

    cout<<"Size : "<<sizeof(Jeevan)<<endl;              //size of Class
    cout<<"Health of Jeevan is: "<<Jeevan.getHealth()<<endl;     //get Health
    cout<<"Level is: "<<Jeevan.level<<endl;

// 2. Dynamic Allocation in Heap
    Hero *Ravan = new Hero;
    
    //setting Values
    Ravan->setHealth(120);
    Ravan->setLevel('B');

    cout<<"\nHealth of Ravaan is: "<<Ravan->getHealth()<<endl;     //get Health
    cout<<"Level is: "<<Ravan->level<<endl;

    delete Ravan;       //Freeing Space
    return 0;
}