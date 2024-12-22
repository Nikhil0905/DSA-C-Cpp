#include<iostream>
using namespace std;

class Node{
    public:
    string data;
    int priority;
    Node* next;
    
    Node(string d, int p): data(d), priority(p), next(0) {}
    
}*first = 0;

void enqueue(Node* &first, string item, int priority){
    Node* n = new Node(item,priority);
    if(!first || first->priority > n->priority){
        n->next = first;
        first = n;
        return;
    }
    
    Node* curr = first;
    Node* save = 0;
    while((curr!=0) && (curr->priority <= n->priority)){
        save = curr;
        curr = curr->next;
    }
    save->next = n;
    n->next = curr;
}

void traverse(Node* &first){
    Node* curr = first;
    Node* prev = 0;
    Node* forw = 0;
    
    while(curr){
        forw = curr->next;         
        curr->next = prev;
        prev = curr;
        curr= forw;
    }
    first = prev;
    
    
    Node* temp = first;
    
    while(temp!=0){
        cout<<"Treating patient: "<<temp->data<<" (Severity: "<<temp->priority<<")\n";
        temp = temp->next;
    }
    
    cout<<endl;
}

int main(){
    
   int n;
   cin>>n;
   
   for(int i=0;i<n;i++){
       string item;
       cin>>item;
       int prio;
       cin>>prio;
       enqueue(first,item,prio);
    }
    traverse(first);
    
    
    return 0;
}