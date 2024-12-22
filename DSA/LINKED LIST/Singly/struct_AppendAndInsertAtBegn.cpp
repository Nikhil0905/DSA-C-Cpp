//Output format :
//The first line of output prints "Document: " followed by the initial document content, which inserts the given n values at the beginning.
//The second line prints "Updated Document: " followed by the final document content, which appends the given value s at the end of the document.

#include<iostream>
#include<string>
using namespace std;

struct Node {
    string data;
    Node* next;
    
    Node(string d): data(d),next(nullptr){}
};

void insertAtBegn(Node* &head,const string& newData){
    Node* newNode = new Node(newData);
    newNode->next = head;
    head = newNode;
}

void append(Node* &head,const string & newData){
    Node* newNode = new Node(newData);
    if(head == nullptr){
        head = newNode;
        return;
    }
    
    Node* temp = head;
    while(temp->next != nullptr)
        temp = temp->next;
    
    temp->next = newNode;
}

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data;
        if(temp->next != nullptr)    
            cout<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


main(){
    int n;
    cin>>n;
    cin.ignore();
    
    Node* document = nullptr;
    for(int i=0;i<n;i++){
        string line;
        getline(cin,line);
        insertAtBegn(document,line);
    }
    
    cout<<"Document: ";
    print(document);
    
    string s;
    getline(cin,s);
    append(document,s);
    
    cout<<"Updated Document: ";
    print(document);
    return 0;
}