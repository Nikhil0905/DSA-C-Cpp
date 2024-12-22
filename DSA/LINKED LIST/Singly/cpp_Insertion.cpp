// You are using GCC
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) : data(d), next(nullptr) {}
};

void insertAtBeginning(Node*& head, int newID) {
    
    Node *n = new Node(newID);
    n->next = head;
    head = n;
}

void insertAtEnd(Node*& head, int newID) {

    Node *n = new Node(newID);
    n->next = nullptr;
    if(head== nullptr)
        head = n;
    else{
        Node *ptr = head;  
        while(ptr->next !=nullptr)
            ptr = ptr->next;
        ptr->next = n;
        
    }
    
}

void insertAtPosition(Node*& head, int pos, int newID) {
    
    Node *n = new Node(newID);
    
    if((head == nullptr) or ( pos == 0)){
        n->next = head;
        head = n;
    }
    
    else{
    int count = 1;
        Node* ptr = head;
        while((ptr->next != nullptr) && (count<pos)){
            ptr = ptr->next;
            count++;
        }
        n->next = ptr->next;
        ptr->next = n;
    }
    
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void freeList(Node* head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int N;
    cin >> N;

    Node* head = nullptr;
    int bookID;

    for (int i = 0; i < N; i++) {
        cin >> bookID;
        insertAtEnd(head, bookID);
    }

    int newID1, newID2, randomPosition, newID3;
    cin >> newID1;
    cin >> newID2;
    cin >> randomPosition;
    cin >> newID3;

    insertAtBeginning(head, newID1);
    insertAtEnd(head, newID2);
    insertAtPosition(head, randomPosition, newID3);

    printList(head);
    freeList(head);

    return 0;
}
