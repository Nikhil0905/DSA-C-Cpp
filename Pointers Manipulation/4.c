#include <stdio.h>
#include <stdlib.h>

int* fun(int n)
{
	int a = n;
	
	return &a;
}

int main() {
	
	int *p = fun(5);
	
	printf("%d",*p);
	
    return 0;
}