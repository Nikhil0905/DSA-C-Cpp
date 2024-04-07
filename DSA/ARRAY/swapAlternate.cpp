#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
            //Without SWAP function

// void swapAlternate(int arr[],int n){
//     int start=0;
//     while(start < n-1) {   //Loop till the last element of array
//         int next = start +1;
//         int hold = arr[start];       // can use SWAP function also
//         arr[start]=arr[next];           //swap(arr[i],arr[i+1]);
//         arr[next] = hold;
//         start+=2; 
//     }
// }

                   //With SWAP Function.

void swapAlternate(int arr[],int n){
    int start=0;
    while(start < n-1) {   //Loop till the last element of array
        swap(arr[start],arr[start+1]);      //swapping
        start+=2; 
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

    swapAlternate(arr,n);     //Swapping alternate elements in an array
    cout<<"\nElements after swapping are: \n";

    printArray(arr,n);

    return 0;

}




