#include<iostream>
using namespace std;

void arrayDeclaration(int arr[], int n){
    for(int i=0; i<n; i++){ 
        cin >> arr[i]; // array value assigning
    }
}

int getPivot(int arr[], int n){
    int s=0, e=n-1;
    int m = s + (e - s) / 2;

    while(s <= e){
        if(arr[m] >= arr[0])
            s = m + 1;
        else 
            e = m - 1;  
        m = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int search){ 
    int start = s, end = e;
    
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(search == arr[mid]){
            return mid; // Element found at index 'mid'
        } else if(search < arr[mid]){
            end = mid - 1; // Element is in the left side of 'mid'
        } else{
            start = mid + 1; // Element is in the right side of 'mid'
        }
    }
    return -1; // Element not found in the array
}

int getPosition(int arr[], int n, int k){
    int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1])
        return binarySearch(arr, pivot, n-1, k);
    else
        return binarySearch(arr, 0, pivot-1, k);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    arrayDeclaration(arr, n); // Array declaration and initialization

    int k;
    cout << "\nEnter the number to be searched: ";
    cin >> k;
    int posn = getPosition(arr, n, k); 
    cout << posn;
    return 0;
}