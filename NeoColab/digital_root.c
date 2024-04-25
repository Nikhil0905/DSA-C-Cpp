#include <stdio.h>
int main(){
    unsigned int n,rem;
    int sum =0;
    int count=0;
    scanf("%d",&n);
    int x=n;
    while( x/10!=0 )
    {
        count+=1;                                       //Wrong code.
        while (x!=0){
        rem = x%10;
        sum += rem;
        x = x/10; 
        }
        x = sum;
    }
    
    printf("Digital Root: %d\nNumber of Steps: %d",x,count);

}