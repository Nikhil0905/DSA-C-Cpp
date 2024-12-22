#include <iostream>
using namespace std;

// Heapify function to maintain max-heap property at index i
void maxHeapify(int arr[], int n, int i) {
    int larg = i;
    int l = 2 * i + 1;  // Left child index
    int r = 2 * i + 2;  // Right child index
    
    // Compare with left child
    if (l < n && arr[l] > arr[larg]) 
        larg = l;
    
    // Compare with right child
    if (r < n && arr[r] > arr[larg]) 
        larg = r;
    
    // If largest is not root, swap and heapify the affected subtree
    if (larg != i) {
        swap(arr[i], arr[larg]);
        maxHeapify(arr, n, larg);
    }
}

// Build the max-heap from an array
void buildMaxHeap(int arr[], int n) {
    // Start from the last non-leaf node and heapify each node
    for (int i = n - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
}

// Delete multiples of 3 and rebuild the max-heap
void deleteMultiplesOfThree(int arr[], int *n) {
    int j = 0;
    
    // Filter out multiples of 3
    for (int i = 0; i < *n; i++) {
        if (arr[i] % 3 != 0) {
            arr[j++] = arr[i];  // Keep non-multiples of 3
        }
    }

    *n = j;  // Update the size of the array
    // Rebuild the max-heap after deletion
    buildMaxHeap(arr, *n);
}

// Insert value into the max-heap while maintaining the heap property
void insertIntoMaxHeap(int arr[], int *n, int value) {
    arr[*n] = value;
    (*n)++;
    
    // Maintain heap property by moving the new value up
    int i = *n - 1;
    while (i != 0 && arr[(i - 1) / 2] < arr[i]) {
        swap(arr[i], arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Print the current state of the max-heap
void printMaxHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int n = 0;
    int num_elements;

    cin >> num_elements;

    // Insert elements into the max-heap
    for (int i = 0; i < num_elements; i++) {
        int value;
        cin >> value;
        insertIntoMaxHeap(arr, &n, value);
    }

    // Build max heap from the array
    buildMaxHeap(arr, n);

    // Print the max-heap before deletion
    printMaxHeap(arr, n);

    // Remove multiples of 3 and rebuild the max-heap
    deleteMultiplesOfThree(arr, &n);

    // Print the updated max-heap after deletion
    printMaxHeap(arr, n);

    return 0;
}
