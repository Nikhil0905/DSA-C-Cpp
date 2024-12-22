// You are using GCC
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

struct Queue {
    int queue[MAX_SIZE];
    int front;
    int rear;
};

void initializeQueue(Queue& q) {
    q.front = -1;
    q.rear = -1;
}

bool isEmpty(const Queue& q) {
    return q.front == -1;
}

bool isFull(const Queue& q) {
    return q.rear == MAX_SIZE - 1;
}

void enqueue(Queue& q, int data) {
    if(q.rear == MAX_SIZE - 1)
        return;
    else{
        if(q.front == -1)
        q.front = 0;
        
    }
    q.rear += 1;
    q.queue[q.rear] = data;
}

int countOccurrences(const Queue& q, int element) {
    if(q.front == -1)
        return 0;
    int count = 0;
    for(int i= q.front; i<= q.rear; i++){
        if(q.queue[i] == element)
            count++;
    }
    return count;
    
}

int main() {
    Queue queue;
    initializeQueue(queue);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        enqueue(queue, element);
    }

    int searchElement;
    cin >> searchElement;

    int occurrences = countOccurrences(queue, searchElement);

    cout << "Occurrences of " << searchElement << " in the queue: " << occurrences << std::endl;

    return 0;
}