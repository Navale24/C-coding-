#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,r;
	int m=1;
	r=-10;
	printf("minus of a is %d\n",r);
	printf("\n value of a normally is %d",a);
	printf("\n value of r in post increment is %d",r);
	printf("\n value of a in post increment is %d",a);
	r=++a;
	printf("\n value of r in pre increment operation",r);
	printf("\n value of a in pre increment operation",a);
	r=a--;
	printf("\n value of r in pre decrement is %d",r);
	printf("\n value of a in pre decrement is %d",a);
	printf("\n size of a in bytes is %d bytes \n",sizeof(a));
	printf("\n normal value of true is %d",m);
	printf("\n not of true is %d",!m);
	getch();
}

	
