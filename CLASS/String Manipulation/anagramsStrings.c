#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100]; 
    scanf("%[^\n]", str1); 
    scanf(" %[^\n] ", str2); 

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not an Anagram\n");
        return 0;
    }

    int count1[26] = {0}, count2[26] = {0}; 

    for (int i = 0; i < len1; i++) {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            printf("Not an Anagram\n");
            return 0;
        }
    }

    printf("It is an Anagram\n");

    return 0;
}
