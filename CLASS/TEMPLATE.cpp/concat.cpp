#include <iostream>
#include <cstring>
using namespace std;

template <class T>

T concat(T a,T b){
    return a+b;
}

string concat(const string &a,const string &b,const string &c){
    return a + c + b;
}

int main() {
    int arr1[3], arr2[3];
    string str1, str2, delimiter;

    for(int i=0; i<3; i++)
        cin >> arr1[i];

    for(int i=0; i<3; i++)
        cin >> arr2[i];

    cout << "Concatenated array: ";
    for(int i=0; i<3; i++)
        cout << concat(arr1[i], arr2[i]) << " ";
    cout << endl;
    cin >> str1;
    cin >> str2;
    cin >> delimiter;
    cout << "Concatenated string: " << concat(str1, str2, delimiter) << endl;

    return 0;
}