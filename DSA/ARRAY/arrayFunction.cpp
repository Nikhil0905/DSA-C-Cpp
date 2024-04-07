#include<iostream>
using namespace std;

void callArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n Printing Done\n";
}

int main(){
    int a=10;
    int  arrayA[a] = {2,4,6};      //if size is defined then arrays with no value declared throw zero value.

    //calling  the function
    callArray(arrayA,a);

    int  arrayB[] = {23,45};    //if size is not defined then arrays with no value declared will throw garbage value.
    callArray(arrayB,6);

}