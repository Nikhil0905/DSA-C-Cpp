#include <stdio.h>
int main(){
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("\nEnter second number : ");
    scanf("%d",&b);
    int max = (a>b) ? a: b;

    int hcf;
    for (int  i = 1; i < max; i++)
    {
        if (a%i==0 && b%i==0)
        {
            hcf =i;
        }
        else
        {
            continue;
        }        
    }

    int lcm = (a*b)/hcf;

    printf("\nHCF = %d and LCM = %d",hcf,lcm);
    
    return 0;
}