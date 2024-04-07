// used same code as square but just changed j<=n to j<=i .

#include <iostream>
using namespace std;

int main(){
    // int n,i=1;
    // cin>>n;

    // while(i<=n){
    //     int j=1;
    //     int num = i;
    //     while(j<=i){    //converts square to Triangle
    //         cout<<num<<" ";
    //         num--;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

//OR
    int n,i=1;
    cin>>n;

    while(i<=n){
        int j=1;
        while(j<=i){    //converts square to Triangle
            cout<<(i-j+1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

}