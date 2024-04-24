#include<iostream>
using namespace std;

int arrayDecleration(int arr[][100],int col,int row){
    for(int i=0;i<row;i++){ 
        for(int j=0;j<col;j++)
        cin>>arr[i][j];
    }
}
int printLikeWave(int arr[][100],int col, int row){
    for(int i=0;i<col;i++) {
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else for(int j=row-1;j>=0;j--)
            cout<<arr[i][j]<<" ";
            cout<<endl;

    }
}


int main(){
    int col,row;
    
    cout<<"Enter Size of the Array : "<<endl;
    cin>>row>>col;
    int arr[100][100];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,row,col);  //Array declaration and initialization

    printLikeWave(arr,col,row);
    return 0;
}
