#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    arr = (int *)malloc(10 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }
    printf("Initial array values:\n");
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n\nAssigning NEW values to the array:\n");
    for (int i = 0; i < 10; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }
    return 0;
}

