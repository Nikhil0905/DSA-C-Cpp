#include<iostream>
#include<cmath>
using namespace std;

class Height{
    public:
    int Height;
    double find_hypotenuse(){
        return sqrt(Height*Height + (Height*Height)/4 );
    }
}hypo;

int main(){
    int height;
    cout<<"Enter the Perpendicular height: ";
    cin>>height;
    hypo.Height = height;
    cout<<"The hypotenuse is "<<hypo.find_hypotenuse()<<endl;

    return 0;
}