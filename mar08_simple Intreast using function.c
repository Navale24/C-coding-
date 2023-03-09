#include<stdio.h>
#include<conio.h>
void SI();
void SI()
{
	float p,n,r,si;
	printf("\n Enter p,n,r");
	scanf("%f%f%f",&p,&n,&r);
	si=p*n*r/100;
		printf("\nSimple Intreastis%f",si);
}
void main()
{
	SI();	//function calls has()
	SI();
	printf("\n msg 1");
	SI();
	getch();
}
