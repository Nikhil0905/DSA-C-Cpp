#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node* prev;
    Node* next;
};

void insertAtBeginning(Node** head, const std::string& newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->prev = nullptr;
    newNode->next = *head;

    if (*head != nullptr)
        (*head)->prev = newNode;

    *head = newNode;
}

int countUniqueInteractions(Node* head) {
    Node* curr = head;
    int count = 0;
    
    while(curr != 0){
        int flag = 0;
    Node* tempCurr = curr;
        while(tempCurr->next != 0){
            if(curr->data == tempCurr->next->data)
                flag = 1;
            if(flag == 1)
                goto loopEnd;
            tempCurr = tempCurr->next;
        }
        count++;
        loopEnd:
        curr = curr->next;
    }
    return count;
    
}

int main() {
    Node* head = nullptr;
    int n;
    string data;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;
        insertAtBeginning(&head, data);
    }

    int uniqueInteractions = countUniqueInteractions(head);

    cout << "Number of unique user interactions: " << uniqueInteractions << std::endl;

    return 0;
}