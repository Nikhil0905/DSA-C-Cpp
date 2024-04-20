#include<iostream>
using namespace std;

void arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}

void rotateArray(int arr[],int n,int k){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n] = arr[i];   //value shifting to the right side of the array.
        // temp[(i -k + n)%n] = arr[i]  ..... for left rotation.
    }
    for(int i=0;i<n;i++){
        arr[i] = temp[i];       //assigning new values back to original array from temporary array.
    }                 
}
void printArray(int arr[],int n){
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

    cout<<"The original array is : "<<endl;
    printArray(arr,n);          //Array printing.
    cout<<"Want to rotate array by : ";
    int k;
    cin>>k;                   //value of rotation

    cout<<"Array after rotation by  "<<k<<" positions is : "<<endl;
    rotateArray(arr,n,k);
    printArray(arr,n);         //Printing rotated array.
    return 0;
}
