#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int v):data(v){
        left = right = nullptr;
    }
};
node* min_(node* head){
    while(head && head->left)
        head = head->left;
    return head;
}
node* delete_node(node* head, int value){
    if (head == nullptr){
        cout<<"node not present"<<endl;
        return head;
    }
    if (value>head->data)
        head->right = delete_node(head->right,value);
    else if (value<head->data)
        head->left = delete_node(head->left,value);
    else{
        if (!head->left && !head->right)
        {
            delete head;
            return nullptr;
        }
        else if (!head->left){
            node* temp = head->right;
            delete head;
            return temp;    
        }
        else if (!head->right){
            node* temp = head->left;
            delete head;
            return temp;
        }
        else{
            node* temp = min_(head->right);
            head->data = temp->data;
            head->right = delete_node(head->right,temp->data);
        }
    }
    return head;
    
}
node* insert(node* head, int value){
    if (head == nullptr)
        return new node(value);
    if (value > head->data)
        head->right = insert(head->right,value);
    if (value < head->data)
        head->left = insert(head->left,value);
    return head;
}
void print(node* head){
    if (head==nullptr)
        return;
    print(head->left);
    cout<<head->data<<" ";
    print(head->right);
}
int main() {
    node* head = nullptr;
    int x;
    cin>>x;
    for(int i = 0;i<x;i++){
        int e;
        cin>>e;
        head = insert(head,e);
    }
    print(head);
    cout<<endl;
    int k;
    cout<<"delete: ";
    cin>>k;
    head = delete_node(head,k);
    print(head);
    

    return 0;
}