#include<stdio.h>

int main()
{
	int n;
    printf("Enter number: ");
	scanf("%d",&n);
	
	int x = n;
	int reverse=0;
	
	while(x!=0)
	{
		int r=x%10;
		reverse = reverse*10+r;
		x=x/10;
	}
	printf("%d",reverse);

	return 0;
}