#include<iostream>
using namespace std;


//**IT IS FOR MONOTONIC FUNCTION ONLY.**

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int binarySearch(int arr[],int n, int search){      //**IT IS FOR MONOTONIC FUNCTION ONLY.**
    int start = 0, end = n-1, mid = start + (end - start)/2;   
    //Binary Search Logic (we didn't use (start+end) /2  
    //coz it may lead to wrong answer if the number sum goes out of int range).
    
    while(start <= end) {
        if(search == arr[mid]){
            cout<<mid;       //Element found at index 'mid'.
            break;
        }else if(search < arr[mid]){
            end = mid - 1;           //Element is in the left side of 'mid'.
        }else{
            start = mid + 1;                 //Element is in the right side of 'mid'
        }
        mid = (start + end)/2;             //Recalculate the middle element after each iteration.
    }
    return -1;               //Element not found in the array.
}

int main(){
    int n,search;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization
    cout<<"\nEnter the number you want to search in the array: ";

    cin>>search;
    binarySearch(arr,n,search);
    
    return 0;
}
