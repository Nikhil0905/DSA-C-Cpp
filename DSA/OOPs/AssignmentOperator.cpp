#include <iostream>
using namespace std;

class Hero {
public:
    char level;
    int health;

    // Parameterized Constructor
    Hero(int health, char level) {
        this->health = health;
        this->level = level;
    }

    void print() {
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
    }
};

int main() {

//Assignment Operator : 
    Hero Jeevan(120, 'B');
    Hero Ravaan = Jeevan;
    Ravaan.print();
    return 0;
}
