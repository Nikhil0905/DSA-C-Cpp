#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to insert at the head of the list
void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


// Function to insert at a specific position
void insertAtPosition(Node* &head, int position, int d) {
    Node* n = new Node(d);

    // If position is 1, insert at head
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    // Traverse to the node just before the desired position
    while (count < position - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    // If reached the end of the list, postion not found
    if (temp == NULL ) {
        cout << "Position is out of range." << endl;
        return;
    }

    // Insert at the desired position
    n->next = temp->next;
    temp->next = n;
}

// Function to print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n,pos,item;
    // Create a new node
    Node* head = 0;
    cin>>n;

    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        insertAtHead(head,value);
    }

    cout << "Initial list: ";
    print(head);

    int value;
    cin>>pos>>value;
    insertAtPosition(head, pos, value);
    cout << "After inserting 14 at position 3: ";
    print(head);

    return 0;
}
