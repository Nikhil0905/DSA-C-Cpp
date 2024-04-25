#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int x=0;

    printf("Enter a Number: ");
    scanf("%d",&i);

    do
    {
        x += 1;
        // printf("x = %d\n", x);     
        if (x%18 == 0)          // Move this condition inside the loop
        {
            printf("X + 18 = %d\n", x);
        }
    } while (x <= i);

    return 0;
}
