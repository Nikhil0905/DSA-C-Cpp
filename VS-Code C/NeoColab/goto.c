#include <stdio.h>

int main() {
    int i = 0;

loop:
    if (i == 3)
        goto end;

    i++;

    if (i < 5)
        goto loop;

end:
    printf("%d", i);
    return 0;
}