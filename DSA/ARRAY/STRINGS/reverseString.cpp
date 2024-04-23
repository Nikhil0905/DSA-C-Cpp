#include<iostream>
using namespace std;

void arrayDecleration(char arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}

void reverseString(char arr[],int n){
    int s = 0, e = n-1, m = s+ (e-s)/2;
    while(s<=e){
        swap(arr[s++] , arr[e--]);     //swapping the elements of string from start to middle and vice versa.

    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";     //printing elements of array.
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter Size of the Array : ";
    cin>>n;
    char arr[n];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization

    reverseString(arr,n);   //Reversing the entered string.
    printArray(arr,n);          //Array printing.

    return 0;
}
