#include <stdio.h> 
#include <stdlib.h> 
 
int main() { 
	void *p = malloc(1000); 
	 
	int *a = (int*)p; 
	 
    return 0; 
}