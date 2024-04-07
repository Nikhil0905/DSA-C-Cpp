#include <stdio.h>

// Function to rearrange the array, moving all negative elements to the beginning
void rearrange(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i]< 0) {
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[10]; // Assuming maximum array size is 10
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rearrange(arr, n);
    printArray(arr, n);
    
    return 0;
}


