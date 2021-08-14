/*	Write C code implement a function to swap 2
	global variables.
*/

/*	Local variable: is the variable that it is defined inside any function, this variable can
	be accessed only on the function that defines it.


	Global variable: is the variable that is defined outside any function, 
	this variable can be accessed in any function in the code.

*/

#include<stdio.h>

//gloabal variables
int x , y ;

//frist is the prototype of the functions
void swap(void); 

void main(void)
{
	printf("Please Enter x number : ");
	scanf("%d",&x);
	printf("Please Enter y number : ");
	scanf("%d",&y);
	printf("x before swap is %d\n",x);
	printf("y before swap is %d\n",y);
	//Function call
	swap();
	printf("x after swap is %d\n",x);
	printf("y after swap is %d\n",y);

}
//function implementation
//function will be void its mean that function will not take or return something 
void swap(void)
{
	//local variable
	int temp;
	temp = x;
	x = y;
	y = temp;
}
