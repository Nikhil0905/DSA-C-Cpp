#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
bool ispossible(int arr[],int n,int students,int m){
    int pageSum=0;
    int stCount= 1;
    for(int i=0;i<n;i++){
        if(pageSum + arr[i] <= m)
            pageSum += arr[i];
        else{
            stCount++;
            if(stCount > m || pageSum + arr[i] > m)
                return false;
        }
            pageSum + arr[i];
    }
    return true;
}

int bookAllocation(int arr[],int n,int students){
    int s=0,sum=0;
    for(int i=0;i<n;i++)
        sum += arr[i];   //calculate the sum of all books in the array.
    int e = sum;
    int ans= -1;
    int m = s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n,students,m)){
            ans = m;
            e = m-1;
        }
        else  
            s = m + 1 ;
        m = s +(e-s)/2; 
    }
    return ans;
}


int main(){
    int n,students;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization
    cin>>students;                   //Number of students to allot books.

    int ans = bookAllocation(arr,n,students);
    cout<<ans;
    return 0;
}
