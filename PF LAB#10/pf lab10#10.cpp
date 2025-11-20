#include <stdio.h>
#include <string.h>
int main()
{
    char names[5][20];   
    char search[20];
    FILE *file;
    for (int i=0;i<5;i++)
    {
        printf("Enter name %d:",i+1);
        fgets(names[i],sizeof(names[i]),stdin);
        names[i][strcspn(names[i],"\n")] ='\0';  
    }
    file=fopen("names.txt","w");
    if(file==NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i=0;i<5;i++)
    {
        fprintf(file,"%s\n",names[i]);
    }
    fclose(file);
    file = fopen("names.txt","r");
    if (file==NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nEnter name to search:");
    fgets(search,sizeof(search),stdin);
    search[strcspn(search,"\n")] ='\0'; 
    int found =0;
    char line[20];
    while (fgets(line,sizeof(line),file)!=NULL)
    {
        line[strcspn(line,"\n")] ='\0';  
        if (strcmp(line,search)==0)
        {
            found=1;
            break;
        }
    }
    fclose(file);
    if (found)
        printf("Name found in directory\n");
    else
        printf("Name not found\n");

    return 0;
}

