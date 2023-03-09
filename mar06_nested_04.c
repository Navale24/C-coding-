#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for (i=1;i<=5;i++)//outer loop = rows = 6
	{
		for (j=1;j<=i;j++)// j is directly dependent on i by <i
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	getch();
}



