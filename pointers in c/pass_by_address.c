/*	Write a C code that ask the user to enter 2
	values and save them in two variables, then
	the program sends these variables by address
	to a function that returns the summation of
	them. The program then prints the result.
*/

#include<stdio.h>
int sum(int *x,int *y);

void main(void)
{

	int x,y,z;
	printf("Please Enter Your Frist Number: ");
	scanf("%d",&x);
	printf("Please Enter Your Second Number: ");
	scanf("%d",&y);
	z = sum(&x,&y);
	printf("The Result is: %d\n",z);
}

int sum(int *x,int *y)
{
	return *x + *y;
}
