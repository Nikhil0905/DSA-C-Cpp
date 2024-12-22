#include <stdio.h>
#include <stdlib.h>

int main()
{
	char input1[100],input2[100],input3[100];
	
	FILE *f = fopen("details.txt","r");
	
	if(f==NULL)
	{
		printf("can't open the file");
		return 0;
	}
	
	while(fscanf(f,"%*s %s %*s ",input1)==1)
	{
		fprintf(stdout,"%s\n",input1);
	}
	
	return 0;
}