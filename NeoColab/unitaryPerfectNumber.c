
#include <stdio.h>

// Function to check if a number is a unitary perfect number
int isUnitary(int num) {
    int sum = 0;
    // Loop to find proper divisors and sum them up
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }
    // Checking if the sum of divisors equals the number itself
    if (sum == num)
        return 1; // Return 1 if the number is a unitary perfect number
    else
        return 0; // Return 0 if the number is not a unitary perfect number
}

int main() {
    int num;
    // Input the number
    scanf("%d", &num);
    // Check if the number is a unitary perfect number using the isUnitary function
    if (isUnitary(num))
        printf("%d is a unitary perfect number.\n", num);
    else
        printf("%d is not a unitary perfect number.\n", num);
    return 0;
}
