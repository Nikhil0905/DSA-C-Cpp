#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d): data(d), left(nullptr), right(nullptr){}
};

Node* insertNode(Node* root, int value) {
    if(root == nullptr) return new Node(value);
    if(value > root->data) root->right = insertNode(root->right, value);
    else if(value < root->data) root->left = insertNode(root->left, value);
    return root;
}

bool searchKey(Node* root, int key) {
    if(root == nullptr) return false;
    else if(root->data == key) return true;
    else if(key < root->data)
        return searchKey(root->left,key);
    else
        return searchKey(root->right,key);
}

int main() {
    Node* root = NULL;
    int numNodes, value, key;

    cin >> numNodes;

    for (int i = 0; i < numNodes; i++) {
        cin >> value;
        root = insertNode(root, value);
    }

    cin >> key;

    bool found = searchKey(root, key);
    if (found) {
        cout << "The key " << key << " is found in the binary search tree";
    } else {
        cout << "The key " << key << " is not found in the binary search tree";
    }

    return 0;
}
