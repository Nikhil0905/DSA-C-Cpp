// Switch ke andar bhe switch statement dala ja skta hai***

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;                         //Only int and char is allowed for switch case 
    printf("Enter your age: ");
    scanf("%d", &age);

    switch (age)
    {
    case 10:
        printf("Age is 10 years\n");
        break;
    case 18:
        printf("Age is 18 years\n");
        break;
    case 21:                                  /* If break is not given then All the cases will be printed along 
                                                with default statement will print everytime */ 
        printf("Age is 21 years\n");
        break;
    case 35:
        printf("Age is 35 years\n");
        break;
    
    default:
        printf("Age is neither 10,18,21 or 35 years\n");
        break;
    }
    return 0;
}
