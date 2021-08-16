/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/*
	Write a program in C to calculate the
	factorial of an integer entered by the
	user using while loop
*/

#include<stdio.h>


void main()
{
	int fac = 1;
	int x = 0;
	printf("Please Enter an Intger number: ");
	scanf("%d",&x);	

	do
	{
		fac *= x;
		x--;	
	}while(x!=0);
	printf("\nFactorial = %d\n",fac);
}
