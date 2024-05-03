#include<stdio.h>
#include<stdlib.h>

union student{
	char name[22];
	int rollno;
	int semester;
}typedef Student;

int main()
{
	int n;
	scanf("%d",&n);
	
	Student *s = (Student*)malloc(n*sizeof(Student));
	
	for(int i=0;i<n;i++)
	{
		scanf("%s\n",s[i].name);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%s\n",s[i].name);
	}
	
}