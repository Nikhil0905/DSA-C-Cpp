#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void maxHeapify(int arr[], int n, int i) {
    int larg = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    
    if(l<n && arr[l] > arr[larg])
        larg = l;
    if(r<n && arr[r] > arr[larg])
        larg = r;
    if(larg != i){
        swap(arr[i], arr[larg]);
        maxHeapify(arr, n, larg);
    }
}

void buildMaxHeap(int arr[], int n) {
    for(int i = (n - 1)/2 ; i >= 0; i--){
        maxHeapify(arr, n, i);
    }
}
void deletenode(int arr[],int &size,int i){
    swap(arr[i],arr[size-1]);
    size--;
    maxHeapify(arr,size,i);
    
}
void deleteGreaterThanThreshold(int arr[], int &n, int threshold) {
    for(int i= 0 ; i<n ;i++){
        if(arr[i] > threshold){
            deletenode(arr,n,i);
            i--;
            }
    }
}

void printMaxHeap(int arr[], int n) {
    for(int i =0;i< n ;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {
    int arr[100];
    int n;
    int threshold;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> threshold;

    buildMaxHeap(arr, n);
    deleteGreaterThanThreshold(arr, n, threshold);
    printMaxHeap(arr, n);

    return 0;
}
