#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void vectorDeclaration(vector<int>& v, int n){
    for(int i = 0; i < n; i++){ 
        int val;
        cin >> val;
        v.push_back(val);  // Pushing elements into the vector.
    }
}

void SumOfTwoVectors(vector<int>& v1, int n, vector<int>& v2, int m) {
    vector<int> ans;
    int i = n - 1, j = m - 1, carry = 0;

    while (i >= 0 || j >= 0 || carry != 0) {
        int val1 = (i >= 0) ? v1[i] : 0;
        int val2 = (j >= 0) ? v2[j] : 0;
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        if (i >= 0) i--;
        if (j >= 0) j--;
    }

    reverse(ans.begin(), ans.end());
    v1 = ans;
}

void printVector(const vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";  // Printing elements of the vector.
    }
    cout << endl;
}

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<int> v1;
    vector<int> v2;

    cout << "Enter the elements of the vector1 : ";
    vectorDeclaration(v1, n);  // Vector1 declaration and initialization.
    cout << "Enter the elements of the vector2 : ";
    vectorDeclaration(v2, m);  // Vector2 declaration and initialization.
    
    cout << "The SUM of the elements of the vectors are : ";
    SumOfTwoVectors(v1, n, v2, m);
    printVector(v1);

    return 0;
}
