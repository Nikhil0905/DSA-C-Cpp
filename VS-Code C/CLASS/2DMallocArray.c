#include<stdio.h> 
#include<stdlib.h> 
 
int main() 
{ 
	int **arr = (int**)malloc(5*sizeof(int*)); 
	 
	for(int i=0;i<5;i++) 
	{ 
		*(arr+i) = (int*)malloc(4*sizeof(int)); 
	} 
	 
	for(int i=0;i<5;i++) 
	{ 
		for(int j=0;j<4;j++) 
		{ 
			scanf("%d",&arr[i][j]); 
		} 
	} 
	 
	for(int i=0;i<5;i++) 
	{ 
		for(int j=0;j<4;j++) 
		{ 
			printf("%d ",arr[i][j]); 
		} 
		printf("\n"); 
	} 
	 
	 
}