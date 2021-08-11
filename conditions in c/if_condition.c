/*	Conditional statements are used to execute some code under certain
	conditions.

	C defines 2 different conditional statements.
		1- if Statement
		2- switch Statement
*/

/* there are many cases in using if_condition like:
	1-Only one if condition 
	2-one if condition with else 
	3-many if conditions 

*/


/* if condition syntix:
	if ( condition_1 )
	{
	Action_1;
	}
*/

#include<stdio.h>


void main(void)
{

	int x = 0;
	int y = 0;
	printf("please Enter number1: ");
	scanf("%d",&x);
	printf("\nplease Enter number2: ");
	scanf("%d",&y);
	if(x == y)
	{
	    printf("x is equal to y\n");
	}

}
