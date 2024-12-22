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

        // Destructor
        ~Node() {
            int value = this->data;
            cout << "Memory is freed for node with data " << value << endl;
            // No need to delete next recursively
        }

};

void insertAtHead(Node* &head, int d) {
    // Create a new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// void deleteNode(Node* &head, int position) {
//     // Check if the list is empty or position is invalid
//     if (head == NULL || position <= 0) {
//         cout << "Invalid position or empty list." << endl;
//         return;
//     }

//     // Deleting first node
//     if (position == 1) {
//         Node* temp = head;
//         head = head->next;
//         // Disconnect the node from the list to avoid accidental deletion
//         temp->next = NULL;
//         delete temp;
//     } else {
//         // Deleting any other node
//         Node* curr = head;
//         Node* prev = NULL;
//         int count = 1;
//         while (count < position && curr != NULL) {
//             prev = curr;
//             curr = curr->next;
//             count++;
//         }

//         // If position is greater than the number of nodes
//         if (curr == NULL) {
//             cout << "Position out of range." << endl;
//             return;
//         }

//         // Unlink the node from the list
//         prev->next = curr->next;
//         delete curr;
//     }
// }

void deleteNode(Node* &head, int pos){
    if(!head){
        cout<<"List is empty.\n";
        return;
    }

    Node* curr = head;
    Node* prev = 0;

    int count = 1;
    while(curr){
        if(count == pos){
            if(prev){
                prev->next = curr->next;
            }
            else{
                head = curr->next;
            }
            delete curr;
            return;
        }
        else{
            prev = curr;
            curr = curr->next;
            count++;
        }
    }

    cout<<"Position out of range.\n";

}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin>>n;

    // Create a linked list with nodes
    Node* head = NULL;

    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        insertAtHead(head,value);
    }

    cout << "List before deletion: ";
    print(head);

    int position;
    cout << "Enter position of the node you want to delete: ";
    cin >> position;

    // Delete node at specified position
    deleteNode(head, position);

    cout << "List after deletion: ";
    print(head);

    return 0;
}
