#include <stdio.h>
#include <string.h>
int main()
{
    char message[100];     
    char backup[100];      
    printf("Enter your message: ");
    fgets(message, sizeof(message), stdin);  
    strcpy(backup, message);
    printf("Original Message=%s",message);
    printf("Backup Message=%s",backup);
    return 0;
}

