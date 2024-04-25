// // #include <stdio.h> 
// // int main() {
// //     int a = 5, b = 5;
// //     printf("%d", (a++ > b) && (++b < a));
// //     return 0;
// // }

// #include <stdio.h>
// int main() {
//     int x = 10;
//     int y = 2;
//     y <<= x >>= 2;
//     printf("%d %d", x, y);
//     return 0;
// }

// #include <stdio.h>
    
// int main() {
//     int i = 3;
//     i = i / -2;
//     int k = i % -2;
//     printf("%d %d", i, k);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int a = 0, b = -1;
//     printf("%d", a >= b);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int a = 5, b = 5;
//     printf("%d", (a++ > b) && (++b < a));
//     return 0;
// }


#include <stdio.h>
int main() {
    int num = 0;
    int result = num ? num : -1;
    printf("%d", result);
    return 0;
}