#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n) {
       int count = 0;
       
    vector <bool> prime(n+1,true);
       
       prime[0] = prime[0] = false;
       
       for(int i=2;i<n;i++){
           if(prime[i]){
               count ++;
           for(int j=i*2; j<n ; j=j+i)
                prime[j] = 0;
           }
       }
       
       return count;
   }


int main(){
    int n;

    cout<<"Enter the number till what you wnat to count : ";
    cin>>n;

    int result = countPrimes(n);
    cout<<"\nNumber of prime numbers strictly less than "<<n<<" are : "<<result;
    
    return 0;
}
