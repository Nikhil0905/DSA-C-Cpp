// #include<iostream>
// using namespace std;

// int arrayDecleration(int arr[],int n){
//     for(int i=0;i<n;i++){ 
//         cin>>arr[i];        //array value assigning.
//     }
// }
// int totalOccurance(int  arr[], int n,int element) {  
//     int s=0,e=n-1;
//     int m = s + (e-s)/2;
//     int count=0;
//     while(s<=e){
//         if(arr[m]==element){
//             count++;
//             e = m-1;
//         }
//         else if(arr[m] < element)
//             s = m+1;
//         else
//             e = m-1;
//         m = s + (e - s)/2;
//     }
//     int s2=0,e2=n-1;
//     int m2 = s2 + (e2-s2)/2;
//     while(s2<=e2){
//         if(arr[m2]==element){
//             count++;
//             s2 = m2+1;
//         }
//         else if(arr[m2] < element)
//             s2 = m2+1;
//         else
//             e2 = m2-1;
//         m2 = s2 + (e2 - s2)/2;
//     }
//     return count;
// }

// int printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";     //printing elements of array.
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array : ";
//     arrayDecleration(arr,n);  //Array declaration and initialization

//     int element;
//     cout<<"Enter the element for searching : ";
//     cin>>element;

//     cout<<"\nThe number of times "<<element<<" appears in the array is : \n";
//     cout<<totalOccurance(arr,n,element)<<endl;  
//     return 0;
// }


//............................OR..................................................
#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
int firstOccurance(int arr[],int n, int element) {  
    int s= 0,e = n-1;
    int m = s + (e-s)/2;
    int first = -1;
    while(s<=e) {
        if(arr[m]==element){
            first = m;
            e = m-1;
        }
        else if(arr[m]>element){ //left me jao
            e = m-1;
        }
        else{       //right mein jao
            s = m+1;
        }
        m = s + (e-s)/2;
    }
    return first;
}
int lastOccurance(int arr[],int n, int element) {  
    int s= 0,e = n-1;
    int m = s + (e-s)/2;
    int last = -1;
    while(s<=e) {
        if(arr[m]==element){
            last = m;
            s = m+1;
        }
        else if(arr[m]>element){ //left me jao
            e = m-1;
        }
        else{       //right mein jao
            s = m+1;
        }
        m = s + (e-s)/2;
    }
    return last;
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";     //printing elements of array.
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    arrayDecleration(arr,n);  //Array declaration and initialization
    int element;
    cin>>element;
    int f = firstOccurance(arr,n,element);
    int l = lastOccurance(arr,n,element);

    cout<<"The Count of Occurances is : "<<(l-f+1)<<endl;
    return 0;
}
