#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* maketree(int arr[], Node* r, int i, int n) 
{
    if(i < n){
        Node* temp = new Node(arr[i]);
        r = temp;
        
        r->left = maketree(arr, r->left, 2*i + 1, n);
        
        r->right = maketree(arr, r->right, 2*i + 2, n);
    }
    return r;
    
}

void preorder(Node* r1, Node* r2, int lvl) 
{
    if(r1 == 0 || r2 == 0) return;
    
    if(lvl % 2 == 1)
        swap(r1->data, r2->data);
    
    preorder(r1->left, r2->right, lvl + 1);
    preorder(r1->right, r2->left, lvl + 1);
}

void reverseAlternate(Node* root) {
    if(root == 0) return;
    preorder(root->left, root->right, 1);
}

void printInorder(Node* r) 
{
    if(r != 0){
        printInorder(r->left);
        cout<< r->data <<" ";
        printInorder(r->right);
    }
    
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    Node* root = 0;
    root  = maketree(arr, root, 0, n);
    
    reverseAlternate(root);

    printInorder(root);

    return 0;
}
