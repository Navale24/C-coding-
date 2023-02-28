#include<stdio.h>
#include<conio.h>
void main()
{
	int amt;
	printf("enter the amount");
	scanf("%d",&amt);
	if (amt>1000)
		{
			printf("you have sufficient balance");
		}
	if (amt<=1000)
			{
		printf("You have insufficient balance");

			}
getch();

}





