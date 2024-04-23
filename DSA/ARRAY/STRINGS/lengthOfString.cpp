#include <iostream>
using namespace std;
int lengthOfString(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0';i++){
        count++;
    }
    return  count;  //return the number of characters in string.
}

int main() {
    char name[100];
    cout<<"Enter the name: ";
    cin>>name;

    int length = lengthOfString(name);
    cout<<"Length of string is: "<<length<<endl;
}