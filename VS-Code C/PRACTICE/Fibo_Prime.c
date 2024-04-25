

// Print Fibonacci no.s at odd position and Prime no.s at Even Position.
#include<stdio.h>
int main()
{
	int n;
    printf("Enter no: ");
	scanf("%d",&n);
	int a=1,b=1,c;
	int x=2;
	int i=1;
	while(i<=n)
	{
		if(i%2==1)
		{
			c=a+b;
			printf("%d ",a);
			a=b;
			b=c;
		}
		else
		{
			for(int j=x;1;j++)
			{
				int flag=1;
				for(int k=2;k<=j/2;k++)
				{
					if(j%k==0)
					{
						flag=0;
						break;
					}
				}
				if(flag==1)
				{
					printf("%d ",j);
					x=j+1;
					break;
				}
			}
		}
		i++;
	}	
}