/*	Write a C program that ask the user to
	enter two numbers and print their
	summation, this program should never
	ends until the user close the window
*/

#include <stdio.h>

void main(void)
{
    int x,y,sum;
 	
//the program will work repeatedly untile you stop it
    while(1)
    {
        printf("Please Enter frist number : ");
    	scanf("%d",&x);
	printf("Please Enter second number : ");
	scanf("%d",&y);
	sum = x + y;
	printf("The Sumation is %d\n", sum);
    }


}
