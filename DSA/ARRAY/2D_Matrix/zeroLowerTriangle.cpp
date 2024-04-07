#include<iostream>
using namespace std;

int arrayDecleration(int arr[][5],int n){
    for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
}
void zeroLowerTriangle(int arr[][5], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                arr[i][j]=0;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[5][5];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization

    cout<<"\nThe lower triangle of the given matrix is: \n";
    zeroLowerTriangle(arr,n);

    return 0;
}
