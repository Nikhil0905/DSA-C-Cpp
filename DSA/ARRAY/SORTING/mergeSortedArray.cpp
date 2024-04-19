#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
void mergeSortedArray(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n and j<m){
        if(arr1[i] < arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            if(arr2[j] < arr1[i]){
            arr3[k++]=arr2[j++];
            }
        }
    }
    //first array ke elements copy kardo agar merged array mein na aaye ho toh.
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    //second array ke elements copy kardo agar merged array mein na aaye ho toh.
    while(j<m){
        arr3[k++] = arr2[j++];
    }
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";     //printing elements of array.
    }
    cout<<endl;
}

int main(){
    int n,m,F;
    cin>>n>>m;
    F = n+m;
    int arr1[n];
    int arr2[m];
    int arrF[n+m]={0};   //creating a new array with the sum of both arrays length.
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr1,n);  //Array declaration and initialization
    arrayDecleration(arr2,m);  //Array declaration and initialization
    cout<<"The Merged Array is : \n";
    mergeSortedArray(arr1,n,arr2,m,arrF);  //Merging two sorted arrays into one array.
    printArray(arrF,F);      //Printing the Merged Array.
    return 0;
}
