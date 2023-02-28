#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
		printf("Enter three angles");
	scanf("%d%d%d",&a,&b,&c);
	if (a==60 && b==60 && c==60)
		printf("the following angles will form equilaterial angle");
	else
		printf("the followning angles will not form equilaterial angle");
	getch();
}

