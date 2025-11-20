#include <stdio.h>
#include <string.h>
int main()
{
    char pass1[100];
    char pass2[100];
    printf("Enter password: ");
    fgets(pass1, sizeof(pass1), stdin);
    printf("Confirm password: ");
    fgets(pass2, sizeof(pass2), stdin);
    pass1[strcspn(pass1, "\n")] = '\0';
    pass2[strcspn(pass2, "\n")] = '\0';
    if (strcmp(pass1, pass2) == 0)
    {
        printf("\nPassword Matched");
    }
    else
    {
        printf("do not match\n");
    }
    return 0;
}

