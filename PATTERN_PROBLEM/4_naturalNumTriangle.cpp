// used same code as square but just changed j<=n to j<=i .

#include <iostream>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;
    int num =1;
    while(i<=n){
        int j=1;

        while(j<=i){    //converts square to Triangle
            cout<<num<<" ";
            j++;
            num++;
        }
        cout<<endl;
        i++;
    }

}