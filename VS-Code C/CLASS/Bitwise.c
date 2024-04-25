#include <stdio.h>

int main() {
    int k = 8;
    int m = 7;
    (k < m) || (k = k + 1);
    (! (k < m)) || (m = m + 1);
    printf("%d", k);
    return 0;
}