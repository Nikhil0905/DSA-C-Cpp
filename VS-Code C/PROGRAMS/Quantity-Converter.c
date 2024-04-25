#include <stdio.h>

int main()
{   Again:
    printf("Type 1 to Convert from Kms to Miles and -1 for Vice-versa\n");
    printf("Type 2 to Convert from Inches to Foot -2 for Vice-versa\n");
    printf("Type 3 to Convert from cms to Inches -3 for Vice-versa\n");
    printf("Type 4 to Convert from Kgs to Pounds -4 for Vice-versa\n");
    printf("Type 5 to Convert from Inches to Meters -5 for Vice-versa\n");
    printf("Type 6 to Convert from Cms to Feet -6 for Vice-versa\n");

    printf("Type : ");
    int c;
    scanf("%d", &c);

    printf("Enter Quantity: ");

    double q;
    scanf("%lf", &q);

    if (c == 1)
    {
        double miles = q * 1.60934;
        printf("Result = %lf Miles\n", miles);
    }
    else if (c == -1)
    {
        double km = q * 1.60934;
        printf("Result = %lf Kms\n", km);
    }
    else if (c == 2)
    {
        double foot = q * 0.083333;
        printf("Result = %lf Foot\n", foot);
    }
    else if (c == -2)
    {
        double inches = q * 12.0;
        printf("Result = %lf Inches\n", inches);
    }
    else if (c == 3)
    {
        double inches = q * 0.393701;
        printf("Result = %lf Inches\n", inches);
    }
    else if (c == -3)
    {
        double cms = q * 2.54;
        printf("Result = %lf Cms\n", cms);
    }
    else if (c == 4)
    {
        double pounds = q * 2.20462;
        printf("Result = %lf Pounds\n", pounds);
    }
    else if (c == -4)
    {
        double kgs = q * 0.453592;
        printf("Result = %lf Kgs\n", kgs);
    }
    else if (c == 5)
    {
        double meters = q * 0.0254;
        printf("Result = %lf Meters\n", meters);
    }
    else if (c == -5)
    {
        double inches = q * 39.3701;
        printf("Result = %lf Inches\n", inches);
    }
    else if (c == 6)
    {
        double Feet = q * 0.0328084;
        printf("Result = %lf Feet\n",Feet);    }
    else if (c == -6)
    {
        double Cms = q * 30.48;
        printf("Result = %lf Cms\n",Cms);    }
    
    else
    {
        printf("Invalid option\n");
    }
    
    printf("To use again type 0\nElse press any other digit to Exit :");
    int again;
    scanf("%d",&again);
    if (again==0)

        goto Again;
    else
    {
        printf("Exiting Thankyou");
    }
    

    return 0;
    }
    
    
