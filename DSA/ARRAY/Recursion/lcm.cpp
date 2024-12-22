#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return (a*b) / gcd(a,b);
}

int find_lcm(int a,int b,int c){
    
    int m = lcm(a,b);
    
    return lcm(m,c);
}


int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    
    int ans = find_lcm(n1,n2,n3);
    cout<<ans;
    
    return 0;
}