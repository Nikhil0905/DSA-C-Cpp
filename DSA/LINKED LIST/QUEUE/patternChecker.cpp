#include <iostream>
#include <deque>
#include <string>
using namespace std;

void findPattern(const string& text, const string& pattern) {
    int textLen = text.length();
    int patternLen = pattern.length();

    if (patternLen > textLen) {
        cout << "Pattern is longer than the string" << endl;
        return;
    }

    deque<char> window; 
    bool found = false;

    for (int i = 0; i <= textLen - patternLen; i++) {
        window.clear();
        for (int j = i; j < i + patternLen; j++) {
            window.push_back(text[j]);
        }

        string currentWindow(window.begin(), window.end());
        if (currentWindow == pattern) {
            cout << "Pattern found at index " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Pattern not found" << endl;
    }
}

int main() {
    string text, pattern;

    getline(cin, text);

    getline(cin, pattern);

    findPattern(text, pattern);

    return 0;
}
