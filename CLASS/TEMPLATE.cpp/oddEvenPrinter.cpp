#include <iostream>
#include <string>
using namespace std;

template <class T>
class OddEvenPrinter {
public:
    void print(T a[], int n) {
        for(int i=0;i<n;i++){
            if(i%2 == 0)
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }  
};

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    string b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    OddEvenPrinter<int> intPrinter;
    intPrinter.print(a, n);

    OddEvenPrinter<string> stringPrinter;
    stringPrinter.print(b, n);

    return 0;
}