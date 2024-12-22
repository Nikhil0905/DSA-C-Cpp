#include <iostream>
using namespace std;

const int cap = 10;
int a[cap];
int n1=0;

void iHeapify(int arr[], int n, int i) {
    int parent = (i - 1) / 2;
    if (i >= 0) { 
 	     if (arr[i] > arr[parent]) { 
            swap(arr[i], arr[parent]); 
            iHeapify(arr, n, parent); 
        } 
    } 
}
void insertNode(int arr[], int& n, int Key){
    n = n + 1;
    arr[n - 1] = Key;
    iHeapify(arr, n, n - 1);
}
void dHeapify(int arr[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1;
    int r = 2 * i + 2; 
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
    dHeapify(arr, n, largest);
    }
}

// void buildMaxHeap(int arr[], int n) {
//     // Start from the last non-leaf node and heapify each node
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         // Note: Use a standard heapify for Max-Heap property
//         int largest = i;
//         int left = 2 * i + 1;
//         int right = 2 * i + 2;

//         if (left < n && arr[left] > arr[largest]) largest = left;
//         if (right < n && arr[right] > arr[largest]) largest = right;

//         if (largest != i) {
//             swap(arr[i], arr[largest]);
//             buildMaxHeap(arr, n);  // Recursively heapify the affected subtree
//         }
//     }
// }

void deleteRoot(int arr[], int& n){
	int lastElement = arr[n - 1];
    arr[0] = lastElement;
	n = n - 1;
    dHeapify(arr, n, 0);
}
 
void printArray(int arr[], int n){
	cout<<"\nHeap : ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main(){
    int choice;
	int item;
	while(1){
		cout<<"\nEnter choice\n1. Insertion \n2. Deletion \n3. Traversing \n4. Exit\n";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"\nEnter data\n";
				cin>>item;
				insertNode(a,n1,item);
				break;
			case 2:
				deleteRoot(a,n1);
				break;
			case 3:
				printArray(a,n1);
				break;
			case 4:
				exit(0);
			default:
				cout<<"\nWrong choice\n";	
		}
	}
}
