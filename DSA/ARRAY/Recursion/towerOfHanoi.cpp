#include<bits/stdc++.h>
using namespace std;

void toh(int n, char source, char dest, char aux, int &moves){
    if(n==1){
        cout<<"Move disk 1 from "<<source<<" to "<<dest<<endl;
        moves++;
        return;
    }
    toh(n-1,source,aux,dest,moves);
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<dest<<endl;
    moves++;
    toh(n-1,aux,dest,source,moves);
}


int main(){
    int n;
    cin>>n;
    
    int moves = 0;
    toh(n,'A','C','B',moves);
    
    cout<<"Total number of moves: "<<moves;
    return 0;
}