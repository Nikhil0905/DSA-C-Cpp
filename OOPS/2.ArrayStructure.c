#include<stdio.h> 
#include<stdlib.h> 
 
struct student{ 
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
		scanf("%s %d %d",s[i].name,&s[i].rollno,&s[i].semester); 
	} 
	 
	for(int i=0;i<n;i++) 
	{ 
		printf("%s %d %d\n",s[i].name,s[i].rollno,s[i].semester); 
	} 
	 

}