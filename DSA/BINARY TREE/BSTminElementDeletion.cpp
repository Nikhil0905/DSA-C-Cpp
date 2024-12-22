#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create a new node with the given data
Node* newNode(int data) {
    Node* node = new Node(); // Use `new` instead of `malloc`
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// Insert a new node into the BST
Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return newNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Delete the minimum node in the BST
Node* deleteMin(Node* root) {
    if (root == nullptr) {
        return root; // Tree is empty
    }

    // If there is no left child, current node is the minimum
    if (root->left == nullptr) {
        Node* temp = root->right; // Replace with right subtree
        delete root;              // Free the memory
        return temp;
    }

    // Recur on the left subtree to delete the minimum node
    root->left = deleteMin(root->left);
    return root;
}

// Perform in-order traversal of the BST
void inOrderTraversal(Node* root) {
    if (root) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

int main() {
    Node* root = nullptr;
    int n, data;

    // Read the number of nodes to insert
    cin >> n;

    // Insert nodes into the BST
    for (int i = 0; i < n; i++) {
        cin >> data;
        root = insert(root, data);
    }

    // Delete the minimum node
    root = deleteMin(root);

    // Perform in-order traversal to display the tree
    if (root) {
        inOrderTraversal(root);
    } else {
        cout << "Tree is empty";
    }

    return 0;
}
