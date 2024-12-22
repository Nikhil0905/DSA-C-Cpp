#include <iostream>
using namespace std;

struct node {
    int key;
    node* left;
    node* right;
};

node* newNode(int num) {
    node* temp = (node*)malloc(sizeof(node));
    temp->key = num;
    temp->left = temp->right = nullptr;
    return temp;
}

node* insert(node* root, int key) {
    if (root == nullptr)
        return newNode(key);

    if (root->key > key)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);

    return root;
}

node* removeOutsideRange(node* root, int min, int max) {
    if (root == nullptr) {
        return nullptr;  // Base case: if the node is null
    }

    // First, fix the left and right subtrees
    root->left = removeOutsideRange(root->left, min, max);
    root->right = removeOutsideRange(root->right, min, max);

    // Now check if the current node is outside the range
    if (root->key < min) {
        node* rightChild = root->right;  // Store right child
        free(root);  // Free the current node
        return rightChild;  // Return right subtree
    }
    
    if (root->key > max) {
        node* leftChild = root->left;  // Store left child
        free(root);  // Free the current node
        return leftChild;  // Return left subtree
    }

    // Return the current node if it is within the range
    return root;
}

void inorderTraversal(node* root) {
    if (root) {
        inorderTraversal(root->left);
        cout << root->key << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    node* root = nullptr;
    int num, min, max;

    cin >> num;

    for (int i = 0; i < num; i++) {
        int key;
        cin >> key;
        root = insert(root, key);
    }

    cin >> min;
    cin >> max;

    root = removeOutsideRange(root, min, max);

    inorderTraversal(root);
    cout << endl; // Add a newline for better output formatting

    return 0;
}
