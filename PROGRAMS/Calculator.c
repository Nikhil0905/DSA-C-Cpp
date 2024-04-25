//   Length converter
#include <stdio.h>

int main(int argc, char const *argv[])
{   Again:
    printf("Type 1 for addition(+)\n");
    printf("Type 2 for Subtraction(-)\n");
    printf("Type 3 for Multiplication(*)\n");
    printf("Type 4 for Int Division(/)\n");
    printf("Type 5 for Floor Division(//)\n");
    printf("\nType below for Operation - ");

    float x, y, z;

    scanf("%f", &x);

    printf("Enter 1st number: ");
    scanf("%f", &y);

    printf("Enter 2st number: ");
    scanf("%f", &z);
        if (x ==1)
    {
        float a = y + z;
        printf("The solution is  %f\n", a);
        
    }
    else if (x ==2)
    {
        float s = y - z;
        printf("The solution is  %f\n", s);
    }

    else if (x==3)
    {
        float m=y*z;
        printf("The solution is  %f\n",m);
    }
    
    else if (x==4)
    {
        int i=y/z;
        printf("The solution is  %d\n",i);
    }

    else if (x==5)
    {
        float f=y/z;
        printf("The solution is  %3f\n",f);
    }

    else
    {
        printf("Invalid option Provided\n");
    }
    

    printf("To use again type 0\nElse press any other Digit to Exit :");
    int q;
    scanf("%d",&q);
    if (q==0)
    {
        goto Again;
    }
    else
    {
        printf("Exiting Thankyou");
    }
    
    return 0;
}
