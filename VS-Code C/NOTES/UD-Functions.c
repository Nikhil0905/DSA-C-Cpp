#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

int main()
{
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("\nEnter the second number: ");
    scanf("%d", &b);

    c= sum(a,b);

    printf("\nThe sum of %d and %d is %d.", a,b,c);
    
    return 0;
}
