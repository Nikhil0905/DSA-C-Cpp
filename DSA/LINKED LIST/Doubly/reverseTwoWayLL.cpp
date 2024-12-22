// You are using GCC
#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void insertAtBeginning(Node** head, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->prev = nullptr;
    newNode->next = *head;

    if (*head != nullptr)
        (*head)->prev = newNode;

    *head = newNode;
}

void reverseList(Node** head) {

    if(!head || !(*head)){
            return;
    }
    Node* curr = *head;
    Node* temp = 0;

    while(curr != 0){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        
        curr = curr->prev;
    }
    
    if(temp != 0){
        *head = temp->prev;
    }
    
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;
    int n, data;

    std::cin >> n;

    // Create the doubly linked list
    for (int i = 0; i < n; i++) {
        std::cin >> data;
        insertAtBeginning(&head, data);
    }

    std::cout << "Original List: ";
    printList(head);

    // Reverse the list
    reverseList(&head);

    std::cout << "Reversed List: ";
    printList(head);

    return 0;
}