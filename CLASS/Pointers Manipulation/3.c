#include <stdio.h> 
#include <stdlib.h> 
 
int* fun(int n) 
{ 
	int *p = (int*)malloc(n*sizeof(int)); 
	 
	return p; 
} 
 
int main() { 
	 
	int *p = fun(5); 
	 
	for(int i=0;i<5;i++) 
	scanf("%d",&p[i]); 
	 
	for(int i=0;i<5;i++) 
	printf("%d ",p[i]); 
	 
	 
	 
    return 0; 
}
