#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p = (int*)malloc(5*sizeof(int));
	
	int *q=p;
	
	for(int i=0;i<5;i++)
	scanf("%d",&p[i]);
	
	free(q);
	
	printf("%d",*p);
	
    return 0;
}