#include <stdio.h>

int main() {
	
	int a;
	float f;
	long int n;
	double d;
	printf("Take input: ");
	int x = scanf("%d %f %ld %lf",&a,&f,&n,&d);
	
	printf("%d\n",x);
	
	printf("%d %f %ld %lf",a,f,n,d);
	
    return 0;
}