#include <stdio.h>
#include <string.h>
int main()
{
    char user1[100];   
    char user2[100];   
    printf("Enter first username: ");
    fgets(user1,sizeof(user1),stdin);
    printf("Enter second username: ");
    fgets(user2,sizeof(user2),stdin);
    user1[strcspn(user1, "\n")] = '\0';
    user2[strcspn(user2, "\n")] = '\0';
    strcat(user1, user2);
    printf("\nCombined Username=%s\n",user1);
    return 0;
}

