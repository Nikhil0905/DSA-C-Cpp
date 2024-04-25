#include <stdio.h>

void binary(int n){
if (n==1)
{
    printf("%d",n);
}
else
{
    int r=n%2;
    binary(n/2);
    printf("%d",r);
}
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    binary(n);

    return 0;
}