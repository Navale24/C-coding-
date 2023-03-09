#include<stdio.h>
#include<conio.h>
 float SI(float p , float n ,float r);
float SI(float p , float n ,float r)
{
	float  si;
	si=p*n*r/100;
	return si;
}
void main()
{
	float p,n,r;
	float ans;
	printf("\nEnter p,n,r");
	scanf("%f%f%f",&p,&n,&r);
	ans=SI(p,n,r);		//answer will store the remaining value of SI
	printf("the answer is %f",ans);

getch();
}
