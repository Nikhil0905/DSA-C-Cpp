#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int firstandlastposition(int arr[],int n, int element) {  
    int a=-1;
    for(int i=0;i<n;i++){
        if(element == arr[i]){
            cout<<"First occurance at : "<<i<<endl;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(element==arr[i])
            a=i;
    }
    if(a==-1)
    cout<<a<<endl;
    else cout<<"Last occurance at :"<<a<<endl;
    return -1;

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
    cout<<"Enter the element for searching : ";
    cin>>element;
    firstandlastposition(arr,n,element);

    return 0;
}
