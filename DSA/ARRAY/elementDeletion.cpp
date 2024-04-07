#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
// int elementDeletion(int arr[], int  *n, int element) { 
//     int i=0;
//     for(i=(*n)-1;i>=0; i--) { 
//         if (arr[i] == element) { 
//             for(int j=i; j<*n-1; j++) {
//                 arr[j] = arr[j+1];
//             } 
//         (*n)--;
//         }
//     }
// }
                //.......................OR.........................
                
int elementDeletion(int arr[], int *n, int element) {
    int i=0, newN=0;
    for(i=0; i<(*n); i++) {
        if (arr[i]!= element) {
            arr[newN++] = arr[i];
        }
    }
    (*n) = newN;
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";     //printing elements of array.
    }
    cout<<endl;
}

int main(){
    int n,element;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    arrayDecleration(arr,n);  //Array declaration and initialization

    cout<<"The array BEFORE deletion is: "<<endl;
    printArray(arr,n);      //Printing array before deleting an element.

    cout<<"Enter element to be deleted: "<<endl;
    cin>>element;       //Element to be deleted from array.
    cout<<"The array AFTER deletion is: "<<endl;
    elementDeletion(arr,&n,element);//deleting an element from array.
    printArray(arr,n);          //Array printing.

    return 0;
}
