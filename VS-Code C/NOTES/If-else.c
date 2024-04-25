#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: \n");

    scanf("%d", &age);

    printf("you have entered %d as your age\n",age);

    if (age>=18)
    {
        printf("Eligible for voting.\n");
    }
    else
    {
        printf("Not eligible for voting yet.\n");
    }
    return 0;
}
