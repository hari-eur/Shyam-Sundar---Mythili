//2. Write a program to print full, inverted, half pyramid(rows = 7) using while and for loop(nested)
#include <stdio.h>
int main()
{
    int rows,i,j,ch;
	printf("Enter number of rows\n");
	scanf("%d",&rows);
   printf("Enter 1 for Full pyramid \nEnter 2 for Inverted Pyramid \nEnter 3 for half Pyramid");
   scanf("%d",&ch);
    
	switch(ch):
		case 1:
		    // Full pyramid
			for(i=1;i<=rows;i++)
			{
				for(j=1;j<=rows-i;j++)
				{
					printf("  ");
				}
				for(j=1;j<=2*i-1;j++)
				{
					printf("* ");
				}
				printf("\n");
			}
			break;
			
		case 2:
			// Inverted pyramid
			i=rows;
			while(i>=1)
			{
				j=1;
				while(j<=rows-i)
				{
					printf("  ");
					j++;
				}
				j=1;
				while(j<=2*i-1)
				{
					printf("* ");
					j++;
				}
				printf("\n");
				i--;
			}
			break;
			
		case 3:
			// Half pyramid
			for(i=1;i<=rows;i++)
			{
				for(j=1;j<=i;j++)
				{
					printf("* ");
				}
				printf("\n");
			}
			break;
			
		default :
			printf("Enter Valid Choice\n");break;
    return 0;
}