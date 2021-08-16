/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/* includce stdio.h libarary 
   to use printf and scanf functions */

#include<stdio.h>

/* scanf is a function used to make an input in c
   syntax: scanf("format specifier,&variable which input will store at);
*/

//define the main function
void main(void)
{
	//make variable that will hold the input
	int x;
	// call the scanf function and passing format specifier as frist parameter
	// and variable name as second parameter
	scanf("%d",&x);
	printf("\nThe variable x is %d",x);
}
