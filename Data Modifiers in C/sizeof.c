/*	The sizeof is a C operator used to get the size of any variable or data type. It takes
	the variable or data type as an input and returns its size in bytes.
	N.B. The sizeof is an operator not a function ! it looks like a function but it is not.
	Example:
		printf("The Size of int is %d",sizeof(int));
		OR
		float
		printf("The Size of X is %d",sizeof(x));
*/

/*
	Write a C code to print the size of all basic
	data types; char, int, float and double.
*/

#include<stdio.h>

void main(void)
{
	int c = sizeof(char);
	int i = sizeof(int);
	int f = sizeof(float);
	int d = sizeof(double);
	printf("Size of char   is %d  bytes\n",c);
	printf("Size of int    is %d  bytes\n",i);
	printf("Size of float  is %d  bytes\n",f);
	printf("Size of double is %d  bytes\n",d);
}
