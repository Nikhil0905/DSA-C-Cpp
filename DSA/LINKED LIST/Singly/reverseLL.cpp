// You are using GCC
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) : data(d), next(nullptr) {}
};

void insertAtBeginning(Node*& head, int element) {
    
    Node *n = new Node(element);
    n->next = head;
    head = n;
}

void reverseLL(Node* &head){
    Node* prev = nullptr;
    Node* current = head;
    Node* forward = nullptr;

    while(current != nullptr){
        forward = current->next; 
        current->next  = prev;
        prev = current;
        current = forward;
    }
    head = prev;
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


int main() {
    int N;
    cout<<"Enter number of elements: ";
    cin >> N;

    Node* head = nullptr;
    int element;

    for (int i = 0; i < N; i++) {
        cin >> element;
        insertAtBeginning(head, element);
    }
    
    cout<<"Original LL: ";
    printList(head);
    reverseLL(head);
    cout<<"Reversed LL: ";
    printList(head);

    return 0;
}
