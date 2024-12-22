#include <bits/stdc++.h>
using namespace std;

void minHeapify(int heap[], int size, int i)
{
    int prt = (i - 1)/2;
    if(prt >= 0){
        if(heap[i] < heap[prt]){
            swap(heap[i], heap[prt]);
            minHeapify(heap, size, prt);
        }
    }
    
}

void insertElement(int heap[], int &size, int value, int capacity) 
{
    if(size>= capacity)
        return;
    heap[size] = value;
    size++;
    minHeapify(heap, size, size -1);
}

void displayMinHeap(int heap[], int size) {
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int findMaxValue(int heap[], int size)
{   
    int max = heap[0];
    for(int i=0;i<size;i++){
        if(heap[i] > max)
            max = heap[i];
    }
    return max;
}

int main() {
    int n;
    cin >> n;

    int capacity = n; 
    int heap[capacity]; 
    int size = 0;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertElement(heap, size, value, capacity);
    }

    displayMinHeap(heap, size);

    int maxValue = findMaxValue(heap, size);
    cout << "Maximum: " << maxValue;

    return 0;
}
