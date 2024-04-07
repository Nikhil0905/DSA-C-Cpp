#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int peakIndexInMountainArray(int arr[],int n){
    int s=0,e=n-1;
    int m = s + (e-s)/2;
    int peak= -1;
    while(s<=e) {
        // if((arr[m]>arr[m+1]) && (arr[m]>arr[m-1])){ 
        //     peak = m;
        //     return peak;
        // }
        // else if(arr[m]>arr[m+1])
        //     e = m - 1;
        // else
        //     s = m + 1;
        // m = s + (e-s)/2;

        if(arr[m]>arr[m+1])
            e = m-1;
        else if(arr[m]<arr[m+1])
            s = m + 1;
        m = s + (e-s)/2;
        }
    return s;
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

    int peak = peakIndexInMountainArray(arr,n);
    cout<<"The peak Index of the Mountain Array is : "<<peak<<endl;
    return 0;
}
