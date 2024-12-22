#include <iostream>
#include<stdlib.h>

using namespace std;

struct tnode
{
    int data;
    struct tnode *right;
    struct tnode *left;
};

struct tnode *CreateBST(struct tnode *, int);
void Inorder(struct tnode *);
void Preorder(struct tnode *);
void Postorder(struct tnode *);

int main()
{
    struct tnode *root = NULL;
    int choice, item, n, i;
    do
    {
        cin>>choice;
        switch(choice)
        {
        case 1:
            root = NULL;
            cin>>n;
            for(i = 1; i <= n; i++)
            {
                cin>>item;
                root = CreateBST(root,item);
            }
            break;
        case 2:
            cout<<"Inorder: ";
            Inorder(root);
            cout<<"\n";
            break;
        case 3:
            cout<<"Preorder: ";
            Preorder(root);
            cout<<"\n";
            break;
        case 4:
            cout<<"Postorder: ";
            Postorder(root);
            cout<<"\n";
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }
    } while(1);
    return 0;
}

struct tnode *CreateBST(struct tnode *r, int item) {
    if( r == 0){
        r = new tnode;
        r->data = item;
        r->left = r->right = 0;
        return r;
    }
    
    if(r->data > item)
        r->left = CreateBST(r->left, item);
    else r->right = CreateBST(r->right, item);
    
    return r;
}

void Inorder(struct tnode *r) {
    if(r != 0){
        Inorder(r->left);
        cout<<r->data<<" ";
        Inorder(r->right);
    }
}

void Preorder(struct tnode *r) {
    if(r != 0){
        cout<<r->data<<" ";
        Preorder(r->left);
        Preorder(r->right);
    }
}

void Postorder(struct tnode *r) {
    if(r != 0){
        Postorder(r->left);
        Postorder(r->right);
        cout<<r->data<<" ";
    }
}
