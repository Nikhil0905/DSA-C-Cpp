#include <iostream>
#include <string>

using namespace std;

void arrayDeclaration(char arr[], int n) {
    for(int i = 0; i < n; i++) { 
        cin >> arr[i]; // Array value assignment.
    }
}

bool isValidChar(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}

bool isPalindrome(const string& str) {
    int i = 0;
    int j = str.length() - 1;
    
    while (i < j) {
        if (!isValidChar(str[i])) {
            i++;
            continue;
        }
        if (!isValidChar(str[j])) {
            j--;
            continue;
        }
        if (tolower(str[i++]) != tolower(str[j--])) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter Size of the Array: ";
    cin >> n;
    char arr[n];
    cout << "Enter the elements of the array: ";
    arrayDeclaration(arr, n);  // Array declaration and initialization

    string temp(arr, arr + n); // Convert char array to string
    cout << "String without special characters: " << temp << endl;

    if (isPalindrome(temp)) {
        cout << "Yes, it's a valid palindrome.";
    } else {
        cout << "No, it's not a valid palindrome.";
    }

    return 0;
}
