#include<iostream>
using namespace std;

int arrayDecleration(int arr[][100],int n){
    for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
}
int printArray(int arr[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";     //printing elements of array.
    }
        }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[100][100];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization

    printArray(arr,n);          //Array printing.

    return 0;
}
