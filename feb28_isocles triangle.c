#include<stdio.h>
#include<conio.h>
	void main()
{
	int a,b,c;
	printf("Enter threee angles");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b||b==c||a==c)
		printf("the following angles forms an isocles triangle");
	else
		printf("the given three angles does not forms an triangle");
	getch(); 
}
