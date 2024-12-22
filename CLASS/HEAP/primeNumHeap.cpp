#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void iHeapify(int arr[], int n, int i) 
{
    int prt = (i -1)/2;
    if(prt >=0){
        if(arr[i] > arr[prt]){
            swap(arr, i, prt);
            iHeapify(arr, n, prt);
        }
    }
    
}

void insertNode(int arr[], int &n, int value) 
{
    
    arr[n] = value;
    n++;
    iHeapify(arr,n,n-1);
}

int isPrime(int num) 
{
    int c = 0;
    for(int i=1; i<num;i++){
        if(num%i == 0)
            c++;
    }
    if(c == 1)
        return num;
    else return 0;
}

void printMaxHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[100];
    int n = 0; 
    int num_elements;

    cin>>num_elements;

    for (int i = 0; i < num_elements; i++) {
        int value;
        cin>>value;

        if (isPrime(value)) {
            insertNode(arr, n, value);
        } else {
            cout<<value<<" is not a prime number\n";
        }
    }
    cout<<"Max Heap: ";
    if(n>0)
        printMaxHeap(arr, n);

    return 0;
}