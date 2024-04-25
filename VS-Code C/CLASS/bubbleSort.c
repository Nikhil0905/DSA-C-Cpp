#include<stdio.h>

int main()
{
	int arr[]={29,15,27,9,8,28,19,23,25,7,5};
	int n=10;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
}