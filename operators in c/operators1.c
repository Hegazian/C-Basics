/* Arithmetic Operators : they are operators used for math operations like 			     add,sub,multi,divsion,...
*/   
/* there are two types of Arithmetic Operators 
	Bi Operators, operators that takes two operands
	1-summation x + y
	2-subtraction x-y
	3-multiplication x*y
	4-Division x/y
	5-Modules x%y
	
	Uni Operators, operators that takes one operand
	1-increment x++ , ++x
	2-decrement x--,--x
*/


#include<stdio.h>


void main(void)
{
	//make variables that will hold the input
	int x = 0;
	int y = 0;
	printf("please Enter number1: ");
	scanf("%d",&x);
	printf("\nplease Enter number2: ");
	scanf("%d",&y);
	printf("\n x+y = %d",x+y);
	printf("\n x-y = %d",x-y);
	printf("\n x*y = %d",x*y);
	printf("\n x/y = %d",x/y);
	printf("\n x MOD y = %d\n",x%y);
	printf("\n x++ = %d",x++);
	printf("\n ++x = %d",++x);
	printf("\n y-- = %d",y--);
	printf("\n --y = %d\n",--y);

}
