#include<iostream>
using namespace std;

int arrayDecleration(int arr[][10],int m,int n){
    for(int i=0;i<m;i++){ 
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
}
int rowSum(int arr[][10],int m, int n ){
    for(int i=0;i<m;i++){ 
        int sum=0;
        for(int j=0;j<n;j++)
            sum+=arr[i][j];
        cout<<"Sum of elements in Row "<<i+1<<": "<<sum<<endl;
    }
}
int colSum(int arr[][10],int m, int n ){
    for(int i=0;i<n;i++){ 
        int sum=0;
        for(int j=0;j<m;j++)
            sum+=arr[j][i];
        cout<<"Sum of elements in Col "<<i+1<<": "<<sum<<endl;
    }
}

int printArray(int arr[][10],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";     //printing elements of array.
    }
    cout<<"\n";   //for moving to next line after printing each row.
        }
    cout<<endl;
}

int main(){
    int n,m;
    
    cout<<"Enter Size of the Array : "<<endl;
    cin>>m>>n;
    int arr[10][10];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,m,n);  //Array declaration and initialization

    printArray(arr,m,n);
    rowSum(arr,m,n);
    cout<<endl;
    colSum(arr,m,n);

    return 0;
}
