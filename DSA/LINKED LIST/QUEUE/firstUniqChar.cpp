// You are using GCC
#include <iostream>
#include <string>
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
    if (isFull(q)) {
        return;
    }

    if (isEmpty(q)) {
        q.front = 0;
    }

    q.rear++;
    q.queue[q.rear] = data;
}

int dequeue(Queue& q) {
    if (isEmpty(q)) {
        return -1; // Assuming -1 as an invalid value for the dequeue operation
    }

    int data = q.queue[q.front];

    if (q.front == q.rear) {
        initializeQueue(q);
    } else {
        q.front++;
    }

    return data;
}

struct Solution {
    int firstUniqChar(const string& s) {
    
    int count[26] = {0};
    for(int i=0 ; i<s.size() ; i++){
        count[s[i] - 'a']++;
    }
    
    for(int i=0 ; i<s.size() ; i++){
        if(count[s[i] - 'a'] == 1)
            return i;
    }
    
    return -1;
    }
};

int main() {
    Solution solution;
    string input;
    cin >> input;

    int result = solution.firstUniqChar(input);
    cout << result ;

    return 0;
}