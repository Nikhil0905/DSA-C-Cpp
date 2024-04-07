#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int findDuplicates(int arr[],int k){
    int ans = 0;
    for(int i=0; i<k;i++){
        ans ^=arr[i];
    }
    for(int i=1; i<k;i++){
            ans ^=i;
    }
    cout<<ans<<" ";
    
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
    arrayDecleration(arr,n);  //Array declaration and initialization.
    printArray(arr,n);          //Array printing.

    findDuplicates(arr,n);

    return 0;

}




