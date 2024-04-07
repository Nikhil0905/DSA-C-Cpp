#include<iostream>
using namespace std;

int main(){
    int n,i=1,z=1;  
    cin>>n;

     while(i<=n){
          int j = n-i;
          while(j){
          cout<<"  ";
          j--;
          }
          int k = 1;
          while(k<=i) {
               cout <<k<<" ";
               k++;
          }
          int b = 1;
          while(b<z) {
               cout <<(z-b)<<" ";
               b++;
          }
     cout<<endl;
     i++;
     z++;       
    }
}