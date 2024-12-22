#include<bits/stdc++.h>
using namespace std;

queue<int> q;

int main(){
    while(true){
        int choice;
        cin >> choice;
        switch(choice){
            case 1: {
                int item;
                cin >> item;
                q.push(item);
                cout << "Customer ID " << item << " is enqueued\n";
                break;
            }
            case 2: {
                if(q.empty()){
                    cout << "Queue is empty\n";
                } else {
                    cout << "Dequeued customer ID: " << q.front() << endl;
                    q.pop();
                }
                break;
            }
            case 3: {
                if(q.empty()){
                    cout << "Queue is empty\n";
                } else {
                    cout << "Customer IDs in the queue are: ";
                    queue<int> temp = q;  // Use a temporary queue to avoid modifying the original queue
                    while(!temp.empty()){
                        cout << temp.front() << " ";
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
