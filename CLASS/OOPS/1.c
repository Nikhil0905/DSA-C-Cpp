#include<stdio.h>

struct student{
	char name[22];
	int rollno;
	long double semester;
};

int main()
{
	struct student s1;
	
	printf("%d",sizeof(s1));
}