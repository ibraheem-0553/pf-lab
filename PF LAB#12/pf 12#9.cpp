#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    printf("Enter number of integers: ");
    scanf("%d", &n);
    arr = (int *)malloc(n);   

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }
    printf("Assigning values...\n");
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;    
    }
    printf("Array values:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

