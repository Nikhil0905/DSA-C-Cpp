#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int *arr1 = new int[n1];
    int *arr2 = new int[n2];
    
    int k = l;
    int j = 0;
    for(int i = 0; i < r - l + 1; i++) {
        if(i < n1)
            arr1[i] = arr[k++];
        else{
            arr2[j++] = arr[k++];
        }
    }
    
    int i = 0;
    j = 0;
    k = l;
    
    // Merging two sorted subarrays back into the main array
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j])
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }
    
    // Copy remaining elements from arr1[], if any
    while(i < n1) {
        arr[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2[], if any
    while(j < n2) {
        arr[k++] = arr2[j++];
    }

    // Free dynamically allocated memory
    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int arr[], int l, int r) {
    if(l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
