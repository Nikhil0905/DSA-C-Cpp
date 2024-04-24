#include<iostream>
using namespace std;

void arrayDecleration(int arr[][100],int row,int col){
    for(int i=0;i<row;i++){ 
        for(int j=0;j<col;j++)
        cin>>arr[i][j];
    }
}

void spiralPrint(int arr[][100],int row,int col){
    //index initialisation
    int stRow = 0, stCol=0;
    int endRow = row-1, endCol = col-1;

    int total = row*col, count = 0;
    while(count<total){

        //print top row
        for(int i = stCol; count<total && i<=endCol;i++){
        cout<<arr[stRow][i]<<" ";
        count++;
        }
        stRow++;

        //print  rightmost column
        for(int i = stRow; count<total && i<=endRow;i++){
        cout<<arr[i][endCol]<<" ";
        count++;
        }
        endCol--;

        //print bottom row
        for(int i = endCol; count<total && i>=stCol;i--){
        cout<<arr[endRow][i]<<" ";
        count++;
        }
        endRow--;

        //print  leftmost column
        for(int i = endRow; count<total && i>=stRow;i--){
        cout<<arr[i][stCol]<<" ";
        count++;
        }
        stCol++;
    }

}

int main(){
    int row,col;
    
    cout<<"Enter Size of the Array : "<<endl;
    cin>>row>>col;
    int arr[100][100];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,row,col);  //Array declaration and initialization

    spiralPrint(arr,row,col);   //Printing Spiral Order
    return 0;
}
