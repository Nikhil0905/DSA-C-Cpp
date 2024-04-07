#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}

void searchArray(int arr[],int n,int search){
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            x = 1;   //If number is found then make the variable 'search' as 1.
            cout<<"Yes "<<search<<" is present at index "<<i<<endl;   //If number is found           
        }
    }
    if(x==0)
        cout<<search<<" is not Present in array";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    arrayDecleration(arr,n);  //Array declaration and initialization

    cout<<"Enter the number to be searched : ";
    int search;
    cin>>search;
    
    searchArray(arr,n,search);
    return 0;

}