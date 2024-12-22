#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d): data(d), left(nullptr),right(nullptr){}
};

node* insert(node* root, int value){
    if(root == nullptr) return new node(value);
    
    else if(value > root->data){
        root->right = insert(root->right, value);
    }
    else{
        root->left = insert(root->left, value);
    }
    return root;
}

node* gotoMin(node* root){
    node*temp = root;
    while(temp && temp->left)
        temp = temp->left;
    return temp;
}

node* deleteNode(node* root, int value){
    if(root == nullptr) {
        cout<<"Tree is empty\n";
        return root;
    }
    else if(value > root->data)
        root->right = deleteNode(root->right,value);
    else if(value < root->data)
        root->left = deleteNode(root->left, value);
    else{
        if(!root->left && !root->right){
            delete root;
            return nullptr;
        }
        else if(!root->right){
            node* temp = root->left;
            delete root;
            return temp;
        }
        else if(!root->left){
            node* temp = root->right;
            delete root;
            return temp;
        }
        else{
            node* temp = gotoMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

void print(node* root){
    if(root == nullptr) return;
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}

int main() {
    int n;
    cin>>n;
    
    node* root = nullptr;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        root = insert(root,e);
    }
    cout<<"Initial Tree : ";
    print(root);
    cout<<endl;
    
    
    int dno;
    cout<<"Enter number of nodes to delete : ";
    cin>>dno;

    if(dno > n){
        cout<<"Excessive deletions opted... Exiting\n";
        return 0;
    }

    cout<<"Deleting Node/s : ";
    for(int i = 0;i<dno;i++){
        int d;
        cin>>d;
        deleteNode(root,d);
    }

    cout<<"After Deletion Tree : ";
    print(root);
    return 0;
    
    
}