#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(int d): data(d), next(0){}
};

Node* createNode(int data) {
    Node* n = new Node(data);
}

Node* reverseKNodes(Node* head, int k) {
    if(!head || k <= 1) return head;
    
    Node* curr = head;
    Node* prev = 0;
    Node* next = 0;
    int count = 0;
    
    while(curr && count<k ){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    if(head)
        head->next = curr;
        
    if(curr)
        head->next = reverseKNodes(curr,k);
    return prev;
    
}

void displayList(Node* head) {
    Node* temp = head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int n, k;
    cin >> n;
    
    Node* head = NULL;
    Node* tail = NULL;
    
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        Node* newNode = createNode(value);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cin >> k;

    cout << "Original Linked List: ";
    displayList(head);

    head = reverseKNodes(head, k);

    cout << "Modified Linked List: ";
    displayList(head);

    deleteList(head);

    return 0;
}