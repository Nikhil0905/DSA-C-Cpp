#include <stdio.h>

int isAlphaNumeric(char c)
{
	if(c>=97 && c<=122 ||c>=65 && c<=90 ||c>=48 && c<=57||c=='_')
	return 1;
	else
	return 0;
}

int main()
{
	char c;
	
	scanf("%c",&c);
	
	if(isAlphaNumeric(c))
	printf("character is alphanumeric");
	else
	printf("character is non alphanumeric");
}