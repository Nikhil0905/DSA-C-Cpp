/* 
Remove all occurrences of a particular quantity from the list when an item is discontinued. 
He wants to use a grounded header linked list for this purpose.
*/

#include <iostream>

struct Node {
    int data;
    Node* next;
};

void insertNode(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void displayList(Node* head) {
    Node* temp = head->next;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

void deleteValue(Node*& head, int value) {
    Node* curr = head;
    Node* prev = 0;
    while(curr != 0 && curr->next != 0){
        if(curr->next->data == value){
            Node* temp = curr->next ;
            curr->next  = temp->next;
            free(temp);
        }
        else
        curr = curr->next;
    }
}

int main() {
    Node* head = new Node();
    head->next = nullptr;

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        std::cin >> data;
        insertNode(head, data);
    }

    int value;
    std::cin >> value;

    deleteValue(head, value);

    displayList(head);

    // Free memory
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}