#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to generate all primes less than sqrt(n) using simple sieve
void simpleSieve(int limit, vector<int> &prime) {
    vector<bool> isPrime(limit + 1, true);

    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p]) {
            prime.push_back(p);
        }
    }
}

// Function to count primes in range [L, R] using segmented sieve
int countPrimesInRange(int L, int R) {
    // Step 1: Generate all primes up to sqrt(R)
    int limit = sqrt(R);
    vector<int> prime;
    simpleSieve(limit, prime);

    // Step 2: Create a boolean array for the range [L, R] and initialize all entries as true
    vector<bool> isPrime(R - L + 1, true);

    // Step 3: Use primes from the simple sieve to mark non-primes in the range [L, R]
    for (int i : prime) {
        // Find the minimum number in the range [L, R] that is a multiple of i
        int base = (L / i) * i;
        if (base < L) {
            base += i;
        }

        // Mark multiples of i in the range [L, R]
        for (int j = base; j <= R; j += i) {
            if (j != i) {
                isPrime[j - L] = false;
            }
        }
    }

    // Special case: mark 1 as non-prime
    if (L == 1) {
        isPrime[0] = false;
    }

    // Count the primes in the range [L, R]
    int count = 0;
    for (int i = 0; i < R - L + 1; ++i) {
        if (isPrime[i]) {
            ++count;
        }
    }

    return count;
}

int main() {
    int L, R;

    cout << "Enter the lower bound L: ";
    cin >> L;

    cout << "Enter the upper bound R: ";
    cin >> R;

    int result = countPrimesInRange(L, R);
    cout << "Number of primes in range [" << L << ", " << R << "] is: " << result << endl;

    return 0;
}
