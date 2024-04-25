#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // Not prime if divisible by any number other than 1 and itself
    }
    return 1; // Prime if not divisible by any number other than 1 and itself
}

// Function to find the greatest prime divisor
int greatestPrimeDivisor(int n) {
    int greatestDivisor = 1;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            greatestDivisor = i;
        }
    }
    return greatestDivisor;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = greatestPrimeDivisor(num);
    
    printf("The greatest prime divisor of %d is: %d\n", num, result);
    
    return 0;
}
