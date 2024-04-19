#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int sortingArray(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=n-1; j>=i;j--) {
            if (arr[i] < arr[j] ){
                continue;
            }   //if the element at index 'i' is smaller than the element at index 'j
            else{
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                        //OR Use SWAP Function.
                // swap(arr[i], arr[j]);     //swap the elements of array.
            }
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

    sortingArray(arr,n);      //Sorting the array using binary search algorithm.
    printArray (arr,n);
    return 0;

}

