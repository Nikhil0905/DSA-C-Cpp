#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next, *prev;
}*first = NULL, *last = NULL;
void insertAtBeg(){
	struct node *n = new node;
	cout<<"\nEnter data: \n";
	cin>>n->data;
	n->next = NULL;
	n->prev = NULL;
	if(first == NULL){
		first = n;
		last = n;
	}
	else{
		n->next = first;
		first->prev = n;
		first = n;
	}
}

void append(){
	struct node *n = new node;
	cout<<"\nEnter data: \n";
	cin>>n->data;
	n->next = NULL;
	n->prev = last;
	if(first == NULL){
		first = n;
		last = n;
	}	
	else{
		last->next = n;
		last = n;
	}
}
void traverse(){
	int choice;
	cout<<"\nEnter choice of traversing \n1. Left to right \n2. Right to left: \n";
	cin>>choice;
	struct node *ptr;
	cout<<" Linked List : ";
	switch(choice){
		case 1:
			ptr = first;
			while(ptr != NULL){
				cout<<ptr->data<<"\t";
				ptr = ptr->next;
			}
			cout<<endl;
			break;
		case 2:
			ptr = last;
			while(ptr != NULL){
				cout<<ptr->data<<"\t";
				ptr = ptr->prev;
			}
			cout<<endl;
			break;
		default:
			cout<<"\nWrong choice...\nExiting...\n";
	}
}
void remove(){
	int item;
	cout<<"\nEnter element to be deleted: \n";
	cin>>item;
	if(first == NULL){
		cout<<"\nUnderflow\n";
		return;
	}	
	struct node *ptr = first;
	while((ptr != NULL) && (ptr->data != item))
		ptr = ptr->next;
	if(ptr == NULL){
		cout<<"\nNo such element\n";
		return;
	}
	if(first == last){
		first = NULL;
		last = NULL;
	}
	else if(ptr == first){
		first = first->next;
		first->prev = NULL;
	}
	else if(ptr == last){
		last = last->prev;
		last->next = NULL;
	}
	else{
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
	}
	delete ptr;
}
main(){
	int choice = 1;
	while((choice > 0) && (choice < 5)){
		cout<<"\nEnter choice \n1. Traversing \n2. insertAtBeg \n3. append \n4. Deletion\n";
		cin>>choice;
		switch(choice){
			case 1: 
				traverse();			
				break;
			case 2:
				insertAtBeg();
				break;
			case 3:
				append();
				break;
			case 4:
				remove();
				break;
			default:
				cout<<"\nWrong choice...\nExiting...";
		}
	}
}
