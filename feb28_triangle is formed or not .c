#include<stdio.h.>
#include<conio.h>
void main()
{
	int a,b,c;
		printf("enter three angles of a triangle");
	scanf("%d%d%d",&a,&b,&c);
	if ((a+b+c)==180)
		printf("the following angles will form a triangle");
	else 
		printf("the folllowing angle will not a triangle");
	getch();
}
