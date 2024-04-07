#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int reverseArray(int arr[],int n){
    int i = 0,end = n-1;
    while(i <= end) {  
        swap(arr[i],arr[end]);       //swapping values
        end--;
        i++;   
    }    
}

void  printArray(int arr[],int n){
    for(int j=0;j<n;j++){ 
        cout<<arr[j]<<" "; 
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    int arr[n];

    arrayDecleration(arr,n);  //Array declaration and initialization

    cout<<"Reversed array is :\n";
       
    reverseArray(arr,n);

    printArray(arr,n);
    return 0;

}