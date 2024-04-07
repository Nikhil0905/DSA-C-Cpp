#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;

    while(i<=n){
        int j=1;
        while (j<=n)
        {
        char inc = char('A' + j-1);
            cout<<inc<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
}