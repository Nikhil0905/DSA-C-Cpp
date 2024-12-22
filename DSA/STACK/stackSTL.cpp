#include<bits/stdc++.h>
using namespace std;

stack<int> s;

int main(){
    while(true){
        int choice;
        cin >> choice;
        switch(choice){
            case 1: {
                int item;
                cin >> item;
                s.push(item);
                cout << "Customer ID " << item << " is pushed onto the stack\n";
                break;
            }
            case 2: {
                if(s.empty()){
                    cout << "Stack is empty\n";
                } else {
                    cout << "Popped customer ID: " << s.top() << endl;
                    s.pop();
                }
                break;
            }
            case 3: {
                if(s.empty()){
                    cout << "Stack is empty\n";
                } else {
                    cout << "Customer IDs in the stack are: ";
                    stack<int> temp = s;  // Use a temporary stack to avoid modifying the original stack
                    while(!temp.empty()){
                        cout << temp.top() << " ";
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
