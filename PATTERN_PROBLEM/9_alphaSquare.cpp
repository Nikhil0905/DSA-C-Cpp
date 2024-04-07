#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;

    while(i<=n){
        int j=1;
        char inc = char(64 + i);
        while (j<=n)
        {
            cout<<inc<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
}