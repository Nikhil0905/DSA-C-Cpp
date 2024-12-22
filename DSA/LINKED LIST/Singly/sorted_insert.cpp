// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* Insert(Node* head, int new_data){
    
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode->data = new_data;
    newnode->next = NULL;
    if (head == NULL){
    
        head = newnode;
        return head;
    }
    
    Node* current = head;
    while(current->next!=NULL)
        current= current->next;
    current->next = newnode;
    return head;
}
Node*  sortedInsert(Node* head, int new_data)
{
    Node * newnode = (Node*)malloc(sizeof(Node));
    newnode->data = new_data;
    newnode->next = NULL;
    Node* current = head;
    Node* prev = NULL;
    
    if (head->data > new_data){
        newnode->next = head;
        return newnode;
    }
    while(current != NULL && current->data < new_data){
            prev = current;
            current = current -> next;
        }
        prev->next= newnode;
        newnode->next = current;
        return head;
}

void printList(Node* head)
{
    Node* temp = head;
    while(temp != 0){
        cout<<temp->data<<" ";
        temp = temp->next;
        
    }
    
}

int main()
{
    Node* head = NULL;
    int n, data;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;
        head = Insert(head, data);
    }

    cin >> data;
    head = sortedInsert(head, data);

    printList(head);

    return 0;
}



