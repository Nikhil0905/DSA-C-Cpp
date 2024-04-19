#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int selectionSorting(int arr[],int n){
    for(int i=0; i<(n-1); i++){     //(n-1) liya taake last mein jo value bachegi sabhi ko sort krne ke baad voh toh biggest he hogi.
    int minIndex =i;
        for(int j= i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
            swap(arr[j],arr[minIndex]);
        }
    }
}
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";     //printing elements of array.
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization
    selectionSorting(arr,n);
    printArray(arr,n);          //Array printing.

    return 0;
}
