#include <iostream>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;
    int num =1;
    while(i<=n){
        int j=1;

        while(j<=n){
            cout<<num<<" ";
            j++;
            num++;
        }
        cout<<endl;
        i++;
    }

}