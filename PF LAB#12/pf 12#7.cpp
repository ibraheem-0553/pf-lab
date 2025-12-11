#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, *newPtr;
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Initial malloc failed!\n");
        return 0;
    }
    printf("Original pointer address: %p\n", (void *)ptr);
    printf("\nCalling realloc(NULL, 10 * sizeof(int))...\n");

    newPtr = (int *)realloc(NULL, 10 * sizeof(int));  
    if (newPtr == NULL) {
        printf("realloc(NULL, size) failed!\n");
        free(ptr);
        return 0;
    }
    printf("New pointer address: %p\n", (void *)newPtr);
    if (newPtr != ptr) {
        printf("\nrealloc(NULL, size) returned a NEW pointer (works like malloc).\n");
    } else {
        printf("\nrealloc(NULL, size) returned the SAME pointer (unusual).\n");
    }
    free(newPtr); 

    return 0;
}

