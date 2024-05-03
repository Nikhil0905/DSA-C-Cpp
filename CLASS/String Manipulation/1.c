#include <stdio.h>
#include <string.h>

int main() {
	char s[]="hello world";
	char *p="bye bye";
	
	strcat(s,p);
	
	printf("%s",s);
	
    return 0;
}