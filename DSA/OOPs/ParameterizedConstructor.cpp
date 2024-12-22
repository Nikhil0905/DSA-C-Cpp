#include <iostream>
using namespace std;

class Hero {
public:
    char level;
    int health;

    // Parameterized Constructor
    Hero(int health, char level) {
        this->health = 120;
        this->level = 'B';
    }

    void print() {
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
    }
};

int main() {
    // Dynamic Allocation in Heap
    Hero* Ravan = new Hero(100, 'A');
    
    // Print the properties of Ravan
    Ravan->print();
    
    // Clean up the dynamically allocated memory
    delete Ravan;

    return 0;
}
