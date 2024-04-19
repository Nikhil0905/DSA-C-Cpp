#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";     //printing elements of array.
    }
    cout<<endl;
}
int bubbleSorting(int arr[],int n){
    for(int i=0;i < n-1; i++){
        bool swapped = false;   //if there were no swaps in loops i.e already sorted.
        for(int j=0; j< n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);   //swapping the element if the current element is greater than next.
                swapped = true;
            }
        }
        if(swapped == false)
        break;              //if no swaps happened in inner loop, then we can say that the array is sorted.
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization

    bubbleSorting(arr,n);
    printArray(arr,n);          //Array printing.

    return 0;
}
