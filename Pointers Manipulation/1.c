#include <stdio.h> 
#include <stdlib.h> 
 
void increment(int **a) 
{ 
	(*a)++; 
} 
 
int main() { 
	 
	int *p; 
	 
	int a=5; 
	p=&a; 
	increment(&p); 
	 
	printf("%d",*p); 
	 
    return 0; 
}