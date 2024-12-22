#include<iostream>
using namespace std;
struct node{
	char data;
	int priority;
	struct node *next;
}*front = NULL;
void enqueue(){
	struct node  *n = new node;
	cout<<"\nEnter data\n";
	cin>>n->data;
	cout<<"\nEnter priority\n";
	cin>>n->priority;
	if((front == NULL) || (n->priority < front->priority)){
		n->next = front;
		front = n;
	}
	else{
		struct node *save = front, *ptr = front->next;
		while((ptr != NULL) && (ptr->priority <= n->priority)){
			save = ptr ;
			ptr = ptr->next;
		}
		n->next = ptr;
		save->next = n;
	}
}
void dequeue(){
	if(front == NULL){
		cout<<"\nUnderflow\n";
		return;
	}
	struct node *ptr = front;
	front = front->next;
	delete ptr;
}
void traversing(){
	struct node *ptr = front;
	cout<<"\nPriority Queue : ";
	while(ptr != NULL){
		cout<<ptr->data<<" : "<<ptr->priority<<"\t";
		ptr = ptr->next;
	}
	cout<<"\n";
}
main(){
	int choice;
	while(1){
		cout<<"\nEnter choice \n1. Enqueue \n2. Dequeue \n3. Traversing \n";
		cin>>choice;
		switch(choice){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				traversing();
				break;
			default:
				cout<<"\nWrong choice..exiting..";
				exit(0);
			}
	}
}
