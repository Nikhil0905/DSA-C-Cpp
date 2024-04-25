// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
// 	int *p = (int*)malloc(1000);
	
// 	int arr[1000];
	
// 	printf("%d %d",sizeof(arr),sizeof(p));
// }


// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
// 	int *p = (int*)malloc(20);
	
// 	for(int i=0;i<5;i++)
// 	scanf("%d",&p[i]);
	
// 	for(int i=0;i<5;i++)
// 	printf("%d ",p[i]);
// }


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = (int*)malloc(1000);
	
	if(p==NULL)
	{
		printf("unable to allocate memory");
		return 0;
	}
	
	for(int i=0;i<5;i++)
	scanf("%d",&p[i]);
	
	for(int i=0;i<5;i++)
	printf("%d ",p[i]);
	
	free(p);
}