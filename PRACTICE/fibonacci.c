#include<stdio.h>
int fibonacci(int s)
{
    if (s==0) return 0; 
    else 
        if (s==1) return 1;
        else return fibonacci(s-1)+fibonacci(s-2);
}
int main(int argc, char const *argv[])
{
    int f,i;
    printf("Enter the value of n: ");
    scanf("%d",&f);

    printf("\nThe Fibonacci series of %d is :\n",f);
    for ( i = 0; i < f; i++)
    {
        printf("%d ",fibonacci(i));
    }
    
    return 0;
}
