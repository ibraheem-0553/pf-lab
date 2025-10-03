#include<stdio.h>
int main()
{
	int course;
	char grade;
	printf("Enter the course number from 1 to 3\n");
	scanf("%d",&course);
	switch (course)
	{
		case 1:
			printf("Enter the grade between A to F\n");
			scanf(" %c",&grade);
			switch (grade)
			{
				case 'A':
					printf("Excellent\n");
					break;
				case 'B':
				    printf("very good\n");
					break;
				case 'C':
					printf("good\n");
					break;
				case 'D':
					printf("average\n");
					break;
				case 'E':
					printf("need improvement\n");
					break;
				case 'F':
					printf("FAIL\n");
					break;
				default:
					printf("invalid grade\n");	
			}
			break;
		case 2:
		 	printf("Enter the grade between A to F\n");
			scanf(" %c",&grade);
			switch (grade)
			{
				case 'A':
					printf("Excellent\n");
					break;
				case 'B':
				    printf("very good\n");
					break;
				case 'C':
					printf("good\n");
					break;
				case 'D':
					printf("average\n");
					break;
				case 'E':
					printf("need improvement\n");
					break;
				case 'F':
					printf("FAIL\n");
					break;
				default:
					printf("invalid grade\n");
            }
            break;
        case 3:
		    printf("Enter the grade between A to F\n");
			scanf(" %c",&grade);
			switch (grade)
			{
				case 'A':
					printf("Excellent\n");
					break;
				case 'B':
				    printf("very good\n");
					break;
				case 'C':
					printf("good\n");
					break;
				case 'D':
					printf("average\n");
					break;
				case 'E':
					printf("need improvement\n");
					break;
				case 'F':
					printf("FAIL\n");
					break;
				default:
					printf("invalid grade\n");
		    }
		    break;
		    default:
		    	printf("invalid course number\n");
    }
    return 0;
}
