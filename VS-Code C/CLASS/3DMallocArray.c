#include<stdio.h>
#include<stdlib.h>

int main() { 
    //Dynamic memory allocation  
    int ***arr = (int***)malloc(2 * sizeof(int**));

    for(int i = 0; i < 2; i++) {
        *(arr + i) = (int**)malloc(3 * sizeof(int*)); 

        for(int j = 0; j < 3; j++) {
            *(*(arr + i) + j) = (int*)malloc(4 * sizeof(int)); 
        }
    }
    //Taking input in 3D dynamic array.
    for(int i = 0; i < 2; i++) { 
        for(int j = 0; j < 3; j++) { 
            for(int k = 0; k < 4; k++) {
                scanf("%d", &arr[i][j][k]); 
            }
        } 
    } 
    //Printing the 3D array
    printf("Elements of the array:\n");
    for(int i = 0; i < 2; i++) { 
        for(int j = 0; j < 3; j++) { 
            for(int k = 0; k < 4; k++) {
                printf("%d ", arr[i][j][k]); 
            }
            printf("\n");
        }
        printf("\n");
    } 

    // Free dynamically allocated memory
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);
     
    return 0; 
}
