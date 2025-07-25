#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){      //used '&' to take reference othewise it would had copied the node. 

    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;   
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp-> data <<" ";   
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){   

    //created a new node
    Node* node1 = new Node(10);
    Node* node2;
    cout << node1 -> data<<endl;
    cout << node1 -> next<<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node2;
    print(head);

    //insertion
    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 15);
    print(tail);
    return 0;
}
