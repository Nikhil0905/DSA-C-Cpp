#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

void append(Node **rootadd, int data) {
    Node *temp, *newnode;
    temp = *rootadd;
    newnode = new Node();
    newnode->left = NULL;
    newnode->data = data;
    newnode->right = NULL;
    
    if (*rootadd == NULL) {
        *rootadd = newnode;
    } else {
        while (1) {
            if (data > temp->data) {
                if (temp->right != NULL) {
                    temp = temp->right;
                } else {
                    temp->right = newnode;
                    break;
                }
            } else {
                if (temp->left != NULL) {
                    temp = temp->left;
                } else {
                    temp->left = newnode;
                    break;
                }
            }
        }
    }
}

int KSmallestUtil(Node *root,int & count, int k) {
    if (root == nullptr) return -1;
    
    int left = KSmallestUtil(root->left, count, k);
    
    if (left != -1)
        return left;
    
    count++;
    
    if (count == k) return root->data;
    
    return KSmallestUtil(root->right, count, k);
}

int KSmallest(Node *root, int k) {
    int count = 0;
    return KSmallestUtil(root, count, k);
}

int main() {
    Node *root = NULL;
    int data, k;
    
    do {
        cin >> data;
        if (data > 0) {
            append(&root, data);
        }
    } while (data > 0);
    
    cin >> k;
    cout << KSmallest(root, k) << endl;
    
    return 0;
}