#include <stdio.h>
#include <string.h>
int main()
{
    char names[3][20];
    for (int i= 0;i<3;i++)
    {
        printf("Enter name %d:",i+1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }
    for (int i=0;i<3;i++)
    {
        printf("Characters in Name %d:\n", i + 1);
        for (int j=0;j<strlen(names[i]);j++)
        {
            printf(" %c",names[i][j]);
        }
        printf("\n");
    }
    return 0;
}

