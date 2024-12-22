
#include<iostream>
using namespace std;

template<class T>

    T maxValue( T a, T b){
    return (a>b)? a:b;
    }


int main() {
    int a, b;
    cin >> a >> b;
    cout << "Maximum value: " << maxValue(a, b) << endl;

    double c, d;
    cin >> c >> d;
    cout << "Maximum value: " << maxValue(c, d) << endl;
    
    return 0;
}