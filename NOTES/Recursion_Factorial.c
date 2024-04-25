#include<stdio.h>
int factorial(int n){
    if (n==0) return 1;
    else return n*factorial(n-1);
}
int main(int argc, char const *argv[])
{
    int i;
    printf("Enter the number : ");
    scanf("%d",&i);
    printf("\nThe factorial of %d is = %d\n",i,factorial(i));
    return 0;
}
