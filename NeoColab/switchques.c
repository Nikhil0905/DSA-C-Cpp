#include <stdio.h>

int main() {
    int num = 5;
    char result;
    switch (num) {
        case 1:
        case 3:
        case 5:
            result = 'A';
            break;
        case 2:
        case 4:
            result = 'B';
            break;
        default:
            result = 'C';
    }
    printf("%c\n", result);
    return 0;
}