#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p = (int*)malloc(5*sizeof(int));
	
	for(int i=0;i<5;i++)
	scanf("%d",&p[i]);
	
	free(p);
	
	printf("%d",*p);
	
    return 0;
}