#include<stdio.h>

// & means address of
// * means value of
int main(int argc, char const *argv[])
{
    printf("We will learn about Pointers - \n");
    int x=76;
    int * parx= &x;          // Stored address of X in parx
    int *ptrn=NULL; // Null pointer - stores nothing , can be used to initialise a pointer
    int *ptrg;
    printf("\nValue of x is %d\n \nAddress of X is %p\n",x,&x); // %p is for pointer address and %d is value of x
    printf("Address of X can also be obtained using this and its value is %p\n",parx); // gives address of X

    printf("\nAddress of Pointer is %p\n",&parx); // %p is for a address
    printf("\nAddress of NULL Pointer is %p\n",ptrn); // prints null address can be used to initialise a pointer

    printf("Address of some garbage is %d\n",ptrg); /* If Null pointer is not defined then it 
            gives some random value coz value is not defined above*/

    printf("\nValue of Pointer X is %d\n",*parx);   // %d will give value of pointer x
    printf("\nHexadecimal-value of Pointer X is %x\n",*parx); // %x is for hexadecimal value of x number

    
    return 0;
}
