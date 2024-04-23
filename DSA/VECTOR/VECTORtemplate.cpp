#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

void vectorDeclaration(vector<int>& v, int n){
    for(int i = 0; i < n; i++){ 
        int val;
        cin >> val;
        v.push_back(val);  // Pushing elements into the vector.
    }
}

void printVector(const vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";  // Printing elements of the vector.
    }
    cout << endl;
}

int main(){
    int n;
    cin >>n;
    
    vector<int> v;

    
    cout << "Enter the elements of the vector : ";
    vectorDeclaration(v, n);  // Vector declaration and initialization.
   
    cout << "The elements of the vector are : ";
    printVector(v);  // Printing the vector.


    return 0;
}
