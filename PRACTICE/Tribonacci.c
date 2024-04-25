#include <stdio.h>

void Tribonacci(int a, int b, int c, int n){
    if(n==1)
        printf("%d",a);
    else{
        int d=a+b+c;
        printf("%d ",a);
        Tribonacci(b,c,d,n-1);
    }
}

int	main()
{
    int a=0,b=1,c=1,d=2;
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    Tribonacci(a,b,c,n);

    return 0;
}
