#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Triangle Pattern : \n");
    
    for ( int i = n; i > 0; i--)   
    {
        for(int j = i; j > 0; j--)
        {
            printf("* ");  
        }   
        printf("\n");
    }
    return 0;
}