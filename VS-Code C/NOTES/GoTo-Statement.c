/*GoTo can be used to exit any loop and come to end...

like in a calculator if we want to exit we can type 0 to exit by providing a if statement */


#include <stdio.h>
int main(int argc, char const *argv[])
{
    me:
    printf("Hello World!\n");       
    goto end;                   
                                   /* If Goto end is commented then, loop will run infinitely*/           
    goto me;
    end:
    printf("Aiyyo What is this\n");
    return 0;
}
