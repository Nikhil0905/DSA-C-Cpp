        // Find a number that is occuring only once while others are occuring twice or multiples of Two.

#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i< (2*n+1);i++){ 
        cin>>arr[i];        //array value assigning.
    }
}

int findUnique(int arr[], int n){
    int result=0;
    for(int i=0; i<(2*n+1); i++){
        result ^=arr[i];   //XOR operation to check the unique element
    }
    cout<<result;
}

int printArray(int arr[],int n){
    for(int i=0;i< (2*n+1);i++){
        cout<<arr[i]<<" ";     //printing elements of array.
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[(2*n+1)];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization
    printArray(arr,n);

    cout<<"The Unique element is: ";
    findUnique(arr,n);
    return 0;

}




