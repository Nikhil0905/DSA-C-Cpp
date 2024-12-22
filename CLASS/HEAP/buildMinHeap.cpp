#include<bits/stdc++.h>
using namespace std;

void minHeapify(int arr[], int n, int i){
    int s = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l<n && arr[l] < arr[s]) s = l;
    if(r<n && arr[r] < arr[s]) s = r;
    
    if(s != i){
        swap(arr[s], arr[i]);
        minHeapify(arr, n, s);
    }
}

void buildMinHeap(int arr[], int n){
   for(int i = n/2 - 1; i>= 0 ;i--){
       minHeapify(arr,n,i);
   }
}

void printHeap(int arr[], int n){
    for(int i = 0; i<n ;i++){
        cout<< arr[i] <<" ";
    }
}

int main(){
    int arr[15];
    int n, th;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    buildMinHeap(arr,n);
    
    cin>>th;
    printHeap(arr, n);
    cout<<endl;
    

    int count = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i] < th)
            count ++;
    }
    cout<<count;
    
    return 0;
}

