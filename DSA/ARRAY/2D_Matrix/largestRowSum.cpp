#include<iostream>
using namespace std;

int arrayDecleration(int arr[][10],int m,int n){
    for(int i=0;i<m;i++){ 
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
}
int largestRowSum(int arr[][10],int m, int n ){
    int min = -12344, rowIndex = -1;
    for(int i=0;i<m;i++){ 
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
            if(min < sum ){
                rowIndex = i+1;
                min = sum;
            }

        }
        cout<<"Sum of elements in Row "<<i+1<<": "<<sum<<endl;
    }
    cout<<"Row having Largest Sum is Row no. : "<<rowIndex<<endl;
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
    largestRowSum(arr,m,n);
    cout<<endl;
    return 0;
}
