#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *fptr;
    int id_1, id_2, id_3;
    fptr = fopen("task.txt","w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }
    printf("Enter 3 book IDs:\n");
    scanf("%d %d %d", &id_1, &id_2, &id_3);
    fprintf(fptr, "%d\n%d\n%d\n", id_1, id_2, id_3);
    fclose(fptr);
    fptr = fopen("task.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    fscanf(fptr, "%d %d %d", &id_1, &id_2, &id_3);
    fclose(fptr);
    printf("Stored Book ID\n");
    printf("%d\n%d\n%d\n", id_1, id_2, id_3);
    return 0;
}

