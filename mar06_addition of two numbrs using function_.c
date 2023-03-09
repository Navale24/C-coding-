#include<stdio.h>
#include<conio.h>
	void add();			//function declaration
	void add()			//function defination
	{
		int a,b,res;
		printf("Enter two numbers");
		scanf("%d%d",&a,&b);
		res=a+b; 
		printf("res is %d",res);
	}

	void main() //execution starts from main
	{
	printf("meg 1");	
	printf("meg 2");	
	add();		//1st function call
	printf("meg 3");	

	printf("meg 4");	
	add();		//2nd function call
	getch();
	}



	