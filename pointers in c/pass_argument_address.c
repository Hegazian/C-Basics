/*	Write a C code that ask the user to enter 2
	values and save them in two variables, then
	the program sends these variables to
	function that calculates the summation and
	subtraction of them, the function returns the
	2 results and return them in two pointers
	received as input arguments . The program
	then print the 2 results.
*/

#include<stdio.h>
void Add_Sub(int a, int b, int* sum, int *sub);

void main(void)
{

	int x,y;
	int z,u;
	printf("Please Enter Your Frist Number: ");
	scanf("%d",&x);
	printf("Please Enter Your Second Number: ");
	scanf("%d",&y);
	Add_Sub(x,y,&z,&u);
	printf("The Result of Sum is : %d\n",z);
	printf("The Result of Sub is : %d\n",u);
}

void Add_Sub(int a, int b, int* sum, int *sub)
{
	*sum = a + b;
	*sub = a - b;
}
