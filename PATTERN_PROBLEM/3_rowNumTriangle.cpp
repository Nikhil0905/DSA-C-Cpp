#include <iostream>

using namespace std;

int main(){
//     int n,i=1,num;
//     cin>>n;

//     while(i<=n){
//         int j =1;
//         num=i;
//         while(j <= i) {
//             cout<<num<<" "; 
//             num = num+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//OR

int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j = i;
        while(j<2*i){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}