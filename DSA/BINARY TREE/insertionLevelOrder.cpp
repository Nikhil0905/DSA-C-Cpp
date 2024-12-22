// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};

void printInorder(Node* r){
    if(r != 0){
        printInorder(r->left);
        cout<<r->data<<" ";
        printInorder(r->right);
        
    }        
}

void printInorderReverse(Node* r){
    if(r != 0){
        printInorderReverse(r->right);
        cout<<r->data<<" ";
        printInorderReverse(r->left);
        
    }
}

Node* insertLevelOrder(int arr[], Node* r, int i, int n) {
    if(i<n){
        Node* temp = new Node(arr[i]);
        r = temp;
        
        r->left = insertLevelOrder(arr, r->left, 2*i + 1, n);
        
        r->right = insertLevelOrder(arr, r->right, 2*i + 2, n);
    }
    return r;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Node* root = nullptr;
    root = insertLevelOrder(arr, root, 0, n);

    printInorder(root);
    cout << endl;
    printInorderReverse(root);
    
    delete[] arr;

    return 0;
}