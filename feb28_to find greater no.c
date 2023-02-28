#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter any two numbers");
	scanf("%d%d",&a,&b);
	if (a>b)
		printf("a is greater than b");
	else
		printf("b is greater than a");
	getch();
}
