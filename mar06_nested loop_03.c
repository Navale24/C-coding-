#include<stdio.h>6
#include<conio.h>
void main()
{
int i,j;
for (i=1;i<=5;i++) // outer loop=5rows for 1st 5 lines of pattern
{
for (j=11;j<=15;j++)
{
printf("%d\t",j);
}
printf("\n");
}
						//for pattern of 5 lines of 15 to 11
{
for (i=1;i<=5;i++)
						//outer loop=5 rows for last 5 lines of pattern.
{
	
for(j=15;j>=11;j--)
{
printf("%d\t",j);
}
printf("\n");
}
getch();
}
}



