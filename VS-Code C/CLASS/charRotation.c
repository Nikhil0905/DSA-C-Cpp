#include <stdio.h>

char charRotation(char c,int n)
{
	if(c>=97 && c<=122)
	return ('a'+(c-'a'+n)%26);
	
	else if(c>=65 && c<=90)
	return ('A'+(c-'A'+n)%26);
	
	else if(c>=48 && c<=57)
	return ('0'+(c-'0'+n)%10);
	
	else
	return c;
}

int main()
{ 
	char c;
	int n;
	
	scanf("%c %d",&c,&n);
	
	printf("%c",charRotation(c,n));
}