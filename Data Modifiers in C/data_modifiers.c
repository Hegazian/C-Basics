/*	Data Modifiers are used to change some of the characteristics of the data types.

		Sign :	signed / unsigned
		Size : 	short / long
		Storage : auto / register / extern / static
		Constant : const
		Volatility : volatile
*/

/*
	Write a C code to check the type of sign representation technique in your compiler
	The Code sequence is:
		1- Define an unsigned integer variable and assign to it -1
		2- print the variable using %u specifier (%u used to print the unsigned values)
		3- The printed variable shall be one of the following:
		-> 0b10000000000000000000000000000001 (Decimal 2147483649) -> Sign Magnitude
		-> 0b11111111111111111111111111111110 (Decimal 4294967294) -> 1’s Complement
		-> 0b11111111111111111111111111111111 (Decimal 4294967295) -> 2’s Complement
*/
#include<stdio.h>

void main(void)
{

	unsigned int x = -1;
	printf("%u\n",x);
}
