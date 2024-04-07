#include<iostream>
using namespace std;

int arrayDecleration(int arr[],int n){
    for(int i=0;i<n;i++){ 
        cin>>arr[i];        //array value assigning.
    }
}
long long int squareRootInteger(int n){      //**IT IS FOR MONOTONIC FUNCTION ONLY.**
    int s = 0, e = n, m = s + (e - s)/2;;   
    long long int ans = -1;
    while(s<=e){
        long long int sq = m*m;
        if(sq==n)
            return m;
        else if(sq > n)
            e = m - 1;
        else{
            ans = m;
            s = m + 1;
        } 
        m = s + (e - s)/2; 
    }
    return ans;
}
double squareRootFloat(int n,int precesion){
    int tempAns = squareRootInteger(n); 
    double ans = tempAns;
    double factor = 1;

    for(int i=0;i<precesion;i++){
        factor = factor/10;   //for increasing the precesion of float number.
        for(double j=ans; j*j<n ;j +=factor)
            ans = j;
    }
    return ans;

} 
int main(){
    int n;
    cin>>n;
    int precesion;
    cout<<"Enter the precision: ";
    cin>>precesion;

    double ans = squareRootFloat(n,precesion);     //calling the function to find square root of number 'n'.
    cout<<"The Float Square Root of "<<n<<" is : "<<ans<<endl;

    return 0;
}
