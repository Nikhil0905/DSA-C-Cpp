#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *start = NULL;
void insertAtBeg(){
	struct node *n = new node;
	cout<<"\nEnter Data\n";
	cin>>n->data;
	n->next = start;
	start = n;
}
void append(){
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
		cout<<ptr->data<<"  ";
		ptr = ptr->next;
	}
	cout<<endl<<endl;
}
main(){
	int choice = 1 ;
	while((choice>0) &&(choice < 4)){	
		cout<<"Enter choice \n1. Traversing \n2. Insertion at beg \n3. Append\n";
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
			default:
				cout<<"\nWrong choice..exiting..\n";			
	
		}
	}
}
