#include<iostream>
#include<string>
using namespace std;

char getmaxOccurChar(string s){
    int arr[26] = {0};

    for(int i=0;i<s.length();i++){
        int num=0;
        if(s[i] >= 'A' && s[i] <= 'Z'){
            num=(s[i]-'A');
        }else if (s[i] >= 'a' && s[i] <= 'z'){
            num=((s[i] - 'a'));
    }
    arr[num]++;
    }

    int min =-1, ans =  0;
    for(int i=0;i<26;i++){
        if(arr[i] > min){
            ans =i;
            min  = arr[i];
        }
    }
    return  ('a'+ans);
}


int main(){
    string n;
    cout<<"Enter the string : ";
    cin>>n;
    
    char max_occur = getmaxOccurChar(n);
    cout << "The character with maximum occurrence is: " << max_occur << endl;
    return 0;
}
