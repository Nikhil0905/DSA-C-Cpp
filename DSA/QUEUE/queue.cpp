#include<iostream>
#include<vector>
using namespace std;

vector<int> queue;  // Dynamic array to store queue elements
int front = -1;     // Front index
int rear = -1;      // Rear index

// Function to display the queue elements
void traverse(){
    cout << "\nQueue: ";
    if(front == -1){
        cout << "No elements\n";
        return;
    }
    for(int i = front; i <= rear; i++){
        cout << queue[i] << "\t";
    }
    cout << "\n";
}

// Function to add an element to the queue
void enqueue(){
    int data;
    cout << "\nEnter data: ";
    cin >> data;

    // If the queue is empty
    if(front == -1){
        front = 0;
        rear = 0;
    } else {
        rear++;
    }
    if(rear >= queue.size())
        queue.push_back(data); // Expand the queue if needed
    else
        queue[rear] = data;
}

// Function to remove an element from the queue
void dequeue(){
    if(front == -1){
        cout << "\nUnderflow\n";
        return;
    }
    
    cout << "\nDequeued: " << queue[front] << "\n";
    
    // If the queue has only one element
    if(front == rear){
        front = -1;
        rear = -1;
        queue.clear(); // Clear the queue if it becomes empty
    }
    else {
        front++;
    }
}

int main(){
    int choice;
    
    // Loop until user decides to exit
    while(1){
        cout << "Enter choice: \n1. Traverse \n2. Enqueue \n3. Dequeue \n4. Exit\n";
        cin >> choice;
        
        switch(choice){
            case 1: 
                traverse();
                break;
            case 2:
                enqueue();
                break;
            case 3:
                dequeue();
                break;
            case 4:
                exit(0);
            default:
                cout << "\nWrong choice..\n";
        }
    }
    return 0;
}
