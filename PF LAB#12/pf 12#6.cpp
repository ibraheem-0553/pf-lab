#include <stdio.h>
int main() {
    int *ptr;   
    printf("Trying to write to uninitialized pointer...\n");
    *ptr = 10;
    printf("Value at ptr: %d\n", *ptr);
    return 0;
}

