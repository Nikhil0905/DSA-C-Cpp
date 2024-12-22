#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *start = NULL;

void insertAtEnd(){
	struct node *n = new node;
	cout<<"\nEnter Data\n";
	cin>>n->data;
	n->next = NULL;
	if(start == NULL)
		start = n;
	else{
		struct node *ptr = start;
		while(ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = n;
	}
}
void traverse(){
	struct node *ptr = start;
	cout<<"\nLinked List : ";
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
	cout<<endl;
}
void remove(){
	int item;
	cout<<"\nEnter data to remove \n";
	cin>>item;
	struct node *ptr = start, *save = NULL;
	if((start != NULL) && (start->data == item)){
		start = start->next;
		delete ptr;
		return;
	}
	while((ptr != NULL) && (ptr->data != item)){
		save = ptr;
		ptr = ptr->next;
	}
		if(ptr == NULL){
			cout<<"\nNo such element\n";
		}
		else{
			save->next = ptr->next;
			delete ptr;	
		}
}
main(){
	int choice = 1 ;
		while((choice > 0)&& (choice < 4)){
		cout<<"Enter choice \n1. Traversing \n2. Insertion at End \n3. Deletion\n";
		cin>>choice;
		switch(choice){
			case 1:
				traverse();
				break;
			case 2:
				insertAtEnd();
				break;
			case 3:
				remove();
				break;
			default:
				cout<<"\nWrong choice..exiting..\n";			
	
		}
	}
}
