#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int d) : data (d), next(0){}
};

void insertAtEnd(Node* &head,int ndata){
    Node* n = new Node(ndata);
    n->next = 0;
    if(head == 0)
        head = n;
    else{
        Node *ptr = head;
        while(ptr->next != 0)
            ptr = ptr->next;
            ptr->next = n;
    }
}

void swap(Node* &head){
    Node* current = head;
    Node* next = 0;
    while(current != 0 && current->next != 0){
        next = current->next;
        swap(current->data,next->data);
        current = current->next;
        current = current->next;
    }
}

void print(Node* head){
    Node * temp = head;
    while(temp != 0){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    Node* head = 0;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insertAtEnd(head,data);
    }
    cout<<"Before swapping: ";
    print(head);
    cout<<"After swapping: ";
    swap(head);
    print(head);
    
    return 0;
}