#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int pairSum(int arr[],int n,int m){
    int sum = 0 ;   //initialize the variable to store the sum of elements in an
    for (int i = 0; i < n; i++)
    {
        for (int j =i+1; j< n; j++)
        {
            if((arr[i] + arr[j])==m){
                if(arr[i]<arr[j])
                    cout<<arr[i]<<" "<<arr[j]<<endl;     //printing the pair whose sum is equal to 'm'
                else
                    cout<<arr[j]<<" "<<arr[i]<<endl;
            }
        }
        
    }
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";     //printing elements of array.
    }
    cout<<endl;
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];

    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization

    pairSum(arr,n,m);

    return 0;

}
