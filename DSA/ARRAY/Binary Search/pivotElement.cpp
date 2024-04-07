//For Rotated Array


#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int getPivot(int arr[],int n){
    int s=0,e=n-1;
    int m = s+ (e-s)/2;

    while(s<=e){
        if(arr[m] > arr[0])
            s = m + 1;
        else 
            e =  m -1;  
        m = s + (e - s)/2;
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization

    int pivot = getPivot(arr,n);

    cout<<pivot<<endl;
    return 0;
}
