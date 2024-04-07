#include<iostream>
using namespace std;

int main(){
    int n,i=0;
    cin>>n;

   while(i<=n){
    int j = n-i;
       while(j){
        cout<<"  ";
        j--;
       }
       int k = 1;
       while(k<=i) {
        cout <<"* ";
        k++;
   }
   cout<<endl;
   i++;
        
    }
}