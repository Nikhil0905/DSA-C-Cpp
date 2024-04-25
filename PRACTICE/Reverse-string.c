#include<stdio.h>
int ans = 0;
int reverse_string(int n){
    while (n!=0)
    {
        
    
        int remainder = n%10;
        ans = ans*10 + remainder;
        n = n/10;
    }
    printf("Reverse of Number is %d",ans);

return 0;
}
 int main(int argc, char const *argv[])
 {
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    reverse_string(n);
 }
 

