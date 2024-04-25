#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime number series
void prime_numbers(int num) {
    printf("Prime numbers till %d:\n", num);
    for (int i = 2; i <= num; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
}

// Main function
int main() {
    int num;
    printf("Enter the  number: ");
    
    scanf("%d", &num);  
    prime_numbers(num);
    return 0;
}
