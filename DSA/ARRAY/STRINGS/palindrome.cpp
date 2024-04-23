#include<iostream>
using namespace std;

void arrayDecleration(char arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}

void palindrome(char arr[],int n){
    int s = 0, e = n-1, m = s+ (e-s)/2;
    int flag = 1;
    while(s<=e){
        if(arr[s++] != arr[e--])
            flag =0;
    }
    if(flag==0) cout<<"The string is not a Palindrome." <<endl;
    else cout<< "The string is a Palindrome." << endl;
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

    palindrome(arr,n);
    return 0;
}
