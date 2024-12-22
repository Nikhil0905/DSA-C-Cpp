#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left, *right;
};
struct node *root = NULL;
void insert(){
	struct node *n = new node;
	cout<<"\nEnter data\n";
	cin>>n->data;
	n->left = NULL;
	n->right = NULL;
	if(root == NULL){
		root = n;
		return;
	}
	struct node *save = NULL, *ptr = root;
	while(ptr != NULL){
		if(n->data < ptr->data){
			save = ptr;
			ptr = ptr->left;
		}
		else{
			save = ptr;
			ptr = ptr->right;
		}
	}
	if(n->data < save->data)
		save->left = n;
	else
		save->right = n;
}
void inorder(struct node *r){
	if(r != NULL){
		inorder(r->left);
		cout<<r->data<<"\t";
		inorder(r->right);
	}
}
void preorder(struct node *r){
	if(r != NULL){
		cout<<r->data<<"\t";
		preorder(r->left);
		preorder(r->right);
	}
}
void postorder(struct node *r){
	if(r != NULL){
		postorder(r->left);
		postorder(r->right);
		cout<<r->data<<"\t";
	}
}
main(){
	int choice;
	while(1){
		cout<<"\nEnter choice \n1. Insertion \n2. Inorder \n3. Preorder\n4. Postorder\n5. Exit\n";
		cin>>choice;
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				cout<<"\nInorder : ";
				inorder(root);
				break;
			case 3:
				cout<<"\nInorder : ";
				preorder(root);
				break;
			case 4:
				cout<<"\nInorder : ";
				postorder(root);
				break;
			case 5:
				exit(0);
			default:
				cout<<"\nWrong choice..\n";
				break;
				
		}
	}
}