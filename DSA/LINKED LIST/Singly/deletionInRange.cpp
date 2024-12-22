// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteNodesInRange(Node** head, int start, int end) {
    if(*head == 0 || start > end ){
        return;
    }
    int count = 1;
    Node* curr = *head;
    Node* prev = 0;
    while(count!=start){
        prev = curr;
        curr = curr->next;
        count++;    
    }
    Node* temp =0;
    while(curr !=0 && count <= end){
        temp = curr;
        curr = curr->next;
        delete temp;
        count++;    
    }
    if(prev!=0)
        prev->next = curr;
    else
        *head = curr;
}

void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteLinkedList(Node* head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;
    int size;

    cin >> size;

    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        insertNode(&head, value);
    }

    int start, end;
    cin >> start;
    cin >> end;

    cout << "Linked List before deletion: ";
    displayLinkedList(head);

    deleteNodesInRange(&head, start, end);

    if (head == nullptr) {
        cout << "Linked List after deletion: all the elements are deleted" << endl;
    } else {
        cout << "Linked List after deletion: ";
        displayLinkedList(head);
    }

    deleteLinkedList(head);

    return 0;
}
