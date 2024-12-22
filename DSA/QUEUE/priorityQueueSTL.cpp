#include<bits/stdc++.h>
using namespace std;

// Priority queue to store fruits with their priorities (max-heap by default)
priority_queue<pair<int, string>> pq;

int main() {
    while(true) {
        int choice;
        cout << "Enter choice: \n1. Enqueue Fruit \n2. Dequeue Highest Priority Fruit \n3. Display Fruits \n4. Exit\n";
        cin >> choice;
        switch(choice) {
            case 1: {
                string fruit;
                int priority;
                cout << "Enter fruit name: ";
                cin >> fruit;
                cout << "Enter priority (higher number = higher priority): ";
                cin >> priority;
                pq.push(make_pair(priority, fruit));  // Enqueue fruit with user-provided priority
                cout << "Fruit " << fruit << " with priority " << priority << " is enqueued\n";
                break;
            }
            case 2: {
                if(pq.empty()) {
                    cout << "Priority queue is empty\n";
                } else {
                    cout << "Dequeued fruit: " << pq.top().second << " with priority " << pq.top().first << endl;
                    pq.pop();
                }
                break;
            }
            case 3: {
                if(pq.empty()) {
                    cout << "Priority queue is empty\n";
                } else {
                    cout << "Fruits in the priority queue (highest priority first):\n";
                    priority_queue<pair<int, string>> temp = pq;  // Use a temporary queue to avoid modifying the original queue
                    while(!temp.empty()) {
                        cout << temp.top().second << " (Priority: " << temp.top().first << ")\n";
                        temp.pop();
                    }
                    cout << endl;
                }
                break;
            }
            case 4: {
                exit(0);
            }
            default: {
                cout << "Invalid option\n";
                break;
            }
        }
    }
}
