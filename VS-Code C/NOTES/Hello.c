#include<stdio.h>
int main(int argc, char const *argv[])
{
    char n[25];
    printf("Hello World!\n");
    printf("Write your name below -\n");
    scanf("%[^\n]*c",&n);
    printf("%s here!",n);
    return 0;
}
