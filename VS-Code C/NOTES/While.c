#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    int i=0;
    printf("Enter a number: ");
    scanf("%d", &x);

// While Loop

    while (i<x)
    {
        printf("%d\n",i);
        i++;
    }
    
    return 0;
}
