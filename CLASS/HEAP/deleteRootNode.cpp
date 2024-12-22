#include <iostream>
using namespace std;
#define MAX_SIZE 100

void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

void heapify(int arr[], int n, int i)
{
    int larg = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    
    if(l <n && arr[l] > arr[larg]) larg = l;
    if(r <n && arr[r] > arr[larg]) larg = r;
    if(larg != i){
        swap(arr[i], arr[larg]);
        heapify(arr, n, larg);
    }
    
}

void buildMaxHeap(int arr[], int n)
{
    for(int i = n/2 -1; i>= 0 ;i--){
        heapify(arr, n, i);
    }
}

void deleteRoot(int arr[], int &n)
{
    arr[0] = arr[ n - 1];
    n--;
    buildMaxHeap(arr,n);
    
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
}

int main()
{
    int n;
    cin >> n;

    int arr[MAX_SIZE];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    buildMaxHeap(arr, n);
    deleteRoot(arr, n);
    printArray(arr, n);

    return 0;
}