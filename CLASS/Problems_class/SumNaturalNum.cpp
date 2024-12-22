#include<iostream>
using namespace std;

class Sum {
    public:
    int n;
    int SumNaturalNumber(int n){
        int sum=0;
        for (int i = 0;  i<=n; i++)
        {
            sum +=i;
        }
        return sum;
    }
}sum1;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<sum1.SumNaturalNumber(n);
}
