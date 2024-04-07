#include <iostream>
using namespace std;

void  printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    cout<<"Before Updatiuon\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    int input;
    cin>>input;
    int  index; // to check if element
    cin>>index;
    //Updating the array with given value
    arr[index] = input;

    cout<<"After Updatiuon\n";   
    printArray(arr,n);     //printing array after updation.

}