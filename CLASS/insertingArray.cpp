#include <stdio.h>

void insert(int arr[],int key,int index,int *size)
{
		(*size)++;
		
		for(int i=(*size)-1;i>=index+1;i--)
		{
			arr[i]=arr[i-1];
		}
		
		arr[index]=key;
}

int main()
{
	int arr[1000];
	
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int key,index;
	
	insert(arr,45,1,&n);
	insert(arr,12,1,&n);
	insert(arr,456,6,&n);
	insert(arr,45788,5,&n);
	insert(arr,36723,1,&n);
	
	
	
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	
	return 0;
}