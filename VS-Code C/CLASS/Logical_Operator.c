// #include <stdio.h>
// int main(){
//     int x=1,y=0,z=5;
//     int a= x&&y||z++;

//     printf("%d\n",z);  
// }

// #include <stdio.h>
// int main(){
//     int x=1,y=0,z=5;
//     int a= x&&z++&&y;            ////x&z mein check krega so z will increment
//     printf("%d",z);
    
// }

// #include <stdio.h>
//     int main()
//     {
//         int x = 1, y = 1, z = 5;
//         int a = y && x || z++;           ////yahan pe y&&x ka ans 1 aa gya h toh aage check nhi krega 
//                                          ////isliye z increment nhi hoga
//         printf("%d", z);
//         return 0;
//     }

// #include <stdio.h>
//     int main()
//     {
//         int x = 1, y = 1, z = 5;
//         int a = y && x && z++;
//         printf("%d", z);
//         return 0;
//     }

// #include <stdio.h>
//     int main()
//     {
//         int x = 1, y = 1, z = 5;
//         int a = y && x && ++z;
//         printf("%d", z);
//         return 0;
//     }


#include <stdio.h>
    int main()
    {
        int x = 1, y = 0, z = 5;
        int a = x && y || ++z;
        printf("%d", z);
        return 0;
    }




