/* Bitwise Operators : they are operators used for logic operations like 			     AND,OR,XOR,NOT,...
	logic operators applied on the binary number so we turn number to binary frist 
	and then do our operator	
	
	1-AND x&y
	2-OR x|y
	3-NOT ~x
	4-XOR x^y
	5-Right shift X>>2 (2 is the Shifting steps)
	6-Left Shift  x<<2
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
	printf("\n x&y = %d",x&y);
	printf("\n x|y = %d",x|y);
	printf("\n ~x = %d\n",~x);
	printf("\n x>>2 = %d",x>>2);
	printf("\n x<<2 = %d\n",x%y);

}



