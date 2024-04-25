// #include <stdio.h> 
// int main() 
// { 
//     int a = 10,b=10; 
//     printf("%d", ++a); 
//     printf("%d", b++); 
// }


// #include <stdio.h>
// int main() {
//     int x = 8;
//     printf("%d", x >> 1);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int a = 10, b = 5;
//     b += a = 15;
//     printf("%d %d", a, b);
//     return 0;
// }


#include <stdio.h>
int main() {
    int i=-1,j=2,k=1,s;
    s=++i + k--*++j;
   
    printf("%d", s);
    return 0;
}