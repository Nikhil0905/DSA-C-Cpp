#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i) {
    //Type your code here
    int max = i,left = 2*i+1,right = 2*i+2;
    if (left < n && arr[left] > arr[max])
        max = left;
    if (right < n && arr[right] > arr[max])
        max = right;
    if (i!=max){
        swap(arr[i],arr[max]);
        heapify(arr,n,max);
    }
}

void buildMaxHeap(int arr[], int n) {
    //Type your code here
    for(int i = n/2 -1;i>=0;i--)
        heapify(arr,n,i);
}

void heapSort(int arr[], int n) {
    buildMaxHeap(arr,n);
    for(int i = n-1;i>0;i--){
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
        
}

void print(int arr[], int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    
    heapSort(arr,n);
    print(arr,n);
    return 0;
}