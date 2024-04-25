#include <stdio.h> 
int main() { 
    int count = 0, n = 5, power = 1; 
    do { 
        power *= n; 
        count++; 
        n--; 
    } 
    while (power <= 100); 
    printf("%d", count); 
    return 0; 
}