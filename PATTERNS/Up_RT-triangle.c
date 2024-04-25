#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Triangle Pattern : \n");
    
    for ( int i = 0; i < n; i++)   
    {
        for(int j = 0; j < i+1; j++)
        {

            printf("* ");
            
        }   
        printf("\n");
    }
    
    return 0;
}
