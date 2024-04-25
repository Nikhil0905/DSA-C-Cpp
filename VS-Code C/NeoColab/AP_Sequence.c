#include <stdio.h>

int main() {
    int A, B, C;  // Declare variables for first term, input number, and common difference

    printf("Enter the first term of the arithmetic sequence: ");
    scanf("%d", &A);

    printf("Enter the common difference: ");
    scanf("%d", &C);

    printf("Enter the number to check (B): ");
    scanf("%d", &B);

    // Check if B is equal to the first term, middle term, or any term in the sequence
    if (B == A || B == A + C || (B - A) % C == 0) {
        printf("%d\n", 1);  // B is present in the sequence
    } else {
        printf("%d\n", 0);  // B is not present in the sequence
    }
    return 0;
}
