#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table for %d:\n", num);  
    i = 1;
    while (i <= 10) {
        printf("%2d  x %2d = %2d\n", num, i, num * i);
        i++;
    }
    return 0;
}
