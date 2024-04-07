#include<iostream>
#include<climits>
using namespace std;

int callArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int getMax(int  arr[], int n){  //function to find the maximum element in an array.
    int max = INT_MIN;
    for(int i=0; i<n;i++){
        if(max < arr[i])        // int max = max(max,arr[i]);
            max = arr[i];
    }
    return max ;
}

int getMin(int  arr[], int n){  //function to find the maximum element in an array.
    int min = INT_MAX;
    for(int i=0; i<n;i++){
        if(min > arr[i])       // int min = min(min,arr[i]);
            min = arr[i];
    }
    return min ;
}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    callArray(arr,n);   //calling function to print elements of array
    cout<<getMax(arr,n)<<endl;   //calling the function and passing the array and its size as arguments.
    cout<<getMin(arr,n)<<endl;  
    
    return 0;
}