#include<iostream>
using namespace std;

int arrayDecleration(int arr1[],int arr2[],int n,int m){
    for(int i=0;i<n;i++){ 
        cin>>arr1[i];        //array value assigning in arr1.
    }
    for(int i=0;i<m;i++){ 
        cin>>arr2[i];        //array value assigning in arr2.
    }
}
int getIntersection(int arr1[],int arr2[],int n,int m){
    int count=0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            if (arr1[i]==arr2[j]){
                count++;
                cout<<arr2[j]<<" ";   //printing the common element of both arrays
            }
        }
        
    }
    if(count==0)
        cout<<"-1";
    
}

int printArray(int arr1[],int arr2[],int n,int m){
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";     //printing elements of arr1.
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";     //printing elements of arr2.
    }
    cout<<endl;
}

int main(){
    int n,m;
    cout<<"Enter Size of arrays by space seperation : \n";
    cin>>n>>m;
    int arr1[n];
    int arr2[m];

    cout<<"Enter the elements of the array : \n";
    arrayDecleration(arr1,arr2,n,m);  //Arrays declaration and initialization

    getIntersection(arr1,arr2,n,m);

    return 0;

}




