// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
    Node(const std::string& value) : data(value), next(nullptr) {}
};

struct Queue {
    Node* front;
    Node* rear;
    Queue() : front(nullptr), rear(nullptr) {}

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(const std::string& item) {
        Node* newNode = new Node(item);

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
};

string toBinary(int n){
    string r;
    while(n>0){
        r = (n%2 == 0 ? "0" : "1" ) + r;
        n = n/2;
    }
    return r;
}

void generatePrintBinary(int n) {
    
    for(int i=1;i<=n;i++){
        string bit = toBinary(i);
        cout<<bit<<" ";
    }
}

int main() {
    int n;
    cin >> n;
    generatePrintBinary(n);

    return 0;
}