#include<iostream>
using namespace std;

void arrayDecleration(char arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}


void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";     //printing elements of array.
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter Size of the Array : ";
    cin>>n;
    char arr[n];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization

    printArray(arr,n);          //Array printing.

    return 0;
}
