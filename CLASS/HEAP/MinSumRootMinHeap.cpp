#include<bits/stdc++.h>
using namespace std;

void minHeapify(int arr[], int n, int i){
    int prt = (i - 1)/2;
    if(prt >= 0){
        if(arr[i] < arr[prt]){
            swap(arr[i], arr[prt]);
            minHeapify(arr, n, prt);
        }
    }
}

void insertNode(int arr[],int &size, int value){
    arr[size] = value;
    size++;
    minHeapify(arr, size, size -1);
}

void maxElement(int arr[], int n){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > max)
            max = arr[i];
    }
    cout<<"Maximum value: "<<max<<endl;
}

void print(int arr[], int n){
    cout<<"Min heap: ";
    int sum = 0;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        if((i<n) && (i>0))
            sum += arr[i];
    }
    cout<<endl;
    cout<<"Root node: "<<arr[0]<<endl;
    maxElement(arr, n);
    cout<<"Sum of nodes: "<<sum<<endl;
    double avg = double(sum)/double(n-1);
    cout<<"Average of nodes: "<<fixed<<setprecision(2)<<avg;
    
}

int main(){
    int n;
    cin>>n;
    int size = 0;
    int arr[n]; 
    
    int element;
    for(int i = 0;i<n;i++){
        cin>>element;
        insertNode(arr, size, element);
    }
    
    print(arr,n);
    return 0;    
}


