#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int firstOccurance(int arr[],int n, int element) {  
    int s= 0,e = n-1;
    int m = s + (e-s)/2;
    int first = -1;
    while(s<=e) {
        if(arr[m]==element){
            first = m;
            e = m-1;
        }
        else if(arr[m]>element){ //left me jao
            e = m-1;
        }
        else{       //right mein jao
            s = m+1;
        }
        m = s + (e-s)/2;
    }
    return first;
}
int lastOccurance(int arr[],int n, int element) {  
    int s= 0,e = n-1;
    int m = s + (e-s)/2;
    int last = -1;
    while(s<=e) {
        if(arr[m]==element){
            last = m;
            s = m+1;
        }
        else if(arr[m]>element){ //left me jao
            e = m-1;
        }
        else{       //right mein jao
            s = m+1;
        }
        m = s + (e-s)/2;
    }
    return last;
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
    int element;
    cin>>element;
    cout<<"First Occurance at : "<<firstOccurance(arr,n,element);
    cout<<"\nLast Occurance at : "<<lastOccurance(arr,n,element);
    return 0;
}
