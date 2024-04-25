#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int*arrayptr = arr;

    printf("Value at position at 3 is %d\n",arr[3]);

    printf("\nAddress of 1st element of array is %d\n",&arr[0]);
    printf("Address of 1st element of array is %d\n",arr);

    printf("Address of 2nd element of array is %d\n",&arr[1]);
    printf("Address of 2nd element of array is %d\n",arr + 1);

    //arr++; will throw an error as it is an constant

    printf("\nValue at address of 1st element is %d\n",*(&arr[0]));
    printf("Value at address of 1st element is %d\n",*arr);
    printf("Value at address of 1st element is %d\n",arr[0]);

    printf("Value at address of 2nd element is %d\n",*(&arr[1]));
    printf("Value at address of 2nd element is %d\n",*(arr + 1));
    printf("Value at address of 2nd element is %d\n",arr[1]);

    return 0;
}
