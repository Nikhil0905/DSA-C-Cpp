#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}

// int insertionSorting(int arr[],int n){
    // for(int i=0;i<n;i++){
    //     int temp = arr[i];
    //     int j=i-1;
    //     for(;j>=0;j--){
    //         if(arr[j] > temp){
    //             arr[j+1] = arr[j];  
    //         }
    //         else break;
    //     }
    //     arr[j+1]=temp;
    // }
//}

//........................OR........................

int insertionSorting(int arr[], int n) {
    int i = 0;
    while (i < n) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
}


int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";     //printing elements of array.
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization
    insertionSorting(arr,n);
    printArray(arr,n);          //Array printing.

    return 0;
}
