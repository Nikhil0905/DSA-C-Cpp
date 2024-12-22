#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;
    node(int d): data(d), right(nullptr), left(nullptr){}
};

node* insert(node* head, int e){
    if(head == 0) return new node(e);
    else if(e > head->data) head->right = insert(head->right,e);
    else head->left = insert(head->left,e);
    return head;
}

void postOrder(node*head){
    if(head == 0) return;
    postOrder(head->left);
    postOrder(head->right);
    cout<<head->data<<" ";
}

void inOrder(node*head){
    if(head == 0) return;
    inOrder(head->left);
    cout<<head->data<<" ";
    inOrder(head->right);
}

int main(){
    node* head = nullptr;

    while(true){
        int e;
        cin>>e;
        if(e == -1) break;
        head = insert(head,e);    
    }
    
    
    postOrder(head);
    cout<<endl;
    inOrder(head);
    
    
    return 0;
}

