#include <stdio.h>

int main() {
    int a=10;
    float b=21.5;
    char c='A';
    void *p;   
    p=&a;
    printf("Integer value:%d\n", *(int *)p);
    p=&b;
    printf("Float value:%.2f\n", *(float *)p);
    p=&c;
    printf("Character value:%c\n", *(char *)p);
    return 0;
}

