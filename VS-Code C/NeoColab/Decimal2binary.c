#include <stdio.h>
#include <stdbool.h>  // Include header for bool type
// Function to convert Decimal to binary with minimum leading zeros
void decToBinary(int n) {
    bool leadingZero = true;

    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1) {
            leadingZero = false;
            printf("%d", k & 1);
        } else if (!leadingZero) {
            printf("0");
        }
    }
}
int main() {
    int n;
    printf( "Enter a decimal number: ");
    scanf("%d",&n);
    decToBinary(n);
    printf("\n");
    return 0;
}
