#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cin>>n;
    int count = 0;
    while(i<=n){
        int j=1;
        while (j<=n)
        {
        char inc = char('A' + count);
            cout<<inc<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
        
    }
}