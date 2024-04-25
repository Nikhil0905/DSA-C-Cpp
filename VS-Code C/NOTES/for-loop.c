#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,x;
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&x);
    printf("Count 0 to %d : ",x);
    for ( i = 0; i <= x; i++)
    {
        printf("%d \a",i);
    }
    
    return 0;
}
