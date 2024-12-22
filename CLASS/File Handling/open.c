#include <stdio.h>
#include <stdlib.h>

int main()
{
	char input[100];
	
	FILE *f = fopen("abc.txt","r");
	
	if(f==NULL)
	{
		printf("can't open the file");
		return 0;
	}
	
	while(fscanf(f,"%s",input)==1)
	{
		fprintf(stdout,"%s ",input);  
	}
	
	return 0;
}