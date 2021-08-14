/*	Recursion: is A function that calls itself is known as a recursive function. And, this 		technique isknown as recursion.
	Recursion in not recommended in Embedded Systems development because it
	use more memory and are generally slow.
*/

/*	Write C code that calculates the factorial of a number entered by the user using
	recursive function
*/


#include<stdio.h>

//frist is the prototype of the functions
int factorial(int x); 

void main(void)
{
	int x,fac; 
	printf("Get factorial of : ");
	scanf("%d",&x);
	//Function call
	fac = factorial(x);
	printf("The factorial is %d\n",fac);

}
//function implementation
int factorial(int x)
{
	if(x>=1)
	{
		//function calls itself
		return x*factorial(x-1);
	}
	else
	{
		return 1;
	}	
}
