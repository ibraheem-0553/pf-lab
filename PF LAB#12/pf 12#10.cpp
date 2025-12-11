#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, *newPtr;
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Initial malloc failed!\n");
        return 0;
    }

    for (int i = 0; i < 5; i++)
        ptr[i] = i + 1;
    newPtr = (int *)realloc(ptr, 10 * sizeof(int));

    if (newPtr == NULL) {
        printf("realloc failed!\n");
        free(ptr);
        return 0;
    }
    free(ptr);   

    printf("Accessing freed memory:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);   
    }
    return 0;
}

