
#include <stdio.h> 
int main() { 
    for (int num = 1; num <= 5; num++) { 
        if (num % 2 == 0) { 
            continue; 
        } 
        for (int i = 1; i <= num; i++) {
            printf("%d ", i); 
        } 
        printf("\n"); 
    } 
    return 0; 
}