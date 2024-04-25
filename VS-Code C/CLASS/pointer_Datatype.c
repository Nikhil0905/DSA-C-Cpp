#include<stdio.h>

int main()
{
	char arr[]={'a','f','y','t','p'};
	
	int size = sizeof(arr)/sizeof(char);
	
	for(int i=0;i<size;i++)
	{
		printf("%c ",arr[i]);
	}		
}



// #include<stdio.h>

// int main()
// {
// 	int arr[]={1,2,3,4,5,6,7,8,9,10};
// 	int size = sizeof(arr)/sizeof(int);
	
// 	for(int i=0;i<size;i++)
// 	{
// 		printf("%d ",arr[i]);
// 	}		
// }