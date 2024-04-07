#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int indexInsertion(int arr[],int *n,int index,int element){
        (*n)++;     //increasing the size of array by
        for (int i =*n; i>index; i--){
            arr[i]  = arr[i-1];
        }
        arr[index]=element;     //assign
        return 1;
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";     //printing elements of array.
    }
    cout<<endl;
}

int main(){
    int n,element,size,index;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization
    cout<<"Enter index in which element will be inserted: ";
    cin>>index;
    cout<<"Enter element to be inserted: ";
    cin>>element;
    indexInsertion(arr,&n,index,element);
    printArray(arr,n);          //Array printing.
    return 0;
}
