#include<stdio.h>
#include<stdlib.h>
int main() {
int rows = 3, cols = 3;
int *matrix;
matrix =(int*)calloc(rows * cols, sizeof(int));
printf("Enter values for the 3x3 matrix:\n");
for (int i = 0; i< rows; i++) {
for (int j = 0; j<cols; j++) {
scanf("%d", (matrix + i * cols + j));
}
}
printf("\nMatrix:\n");
for (int i = 0; i< rows; i++) {
for (int j = 0; j< cols; j++) {
printf("%d ", *(matrix + i * cols + j));
}
printf("\n");
}
free(matrix);
return 0;
}
