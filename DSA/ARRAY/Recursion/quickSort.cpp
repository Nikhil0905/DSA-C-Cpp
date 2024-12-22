#include<bits/stdc++.h>
using namespace std;

int part(int arr[],int l,int r){
    int pivot = arr[r];
    int i = l -1 ;
    for(int j = l; j < r ;j++){
        if(arr[j] < pivot)
            swap(arr[++i], arr[j]);
    }
    swap(arr[++i], arr[r]);

    return ++i;
}

void quickSort(int arr[], int l, int r){
    if(l < r){
        int m = part(arr, l, r);
        quickSort(arr, l, m - 1);     //sorting the left partition
        quickSort(arr, m + 1 , r);  //sorting the right partition
    }
}

void print(int arr[], int n){
    cout<<"Current array status : ";
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, l,r;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    l = 0, r = n -1;

    print(arr,n);
    quickSort(arr,l,r);
    print(arr,n);
    return 0;

}