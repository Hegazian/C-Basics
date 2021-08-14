/*	A function is a block of code that will be defined one
	time and can be executed many times.
	To execute the function you will need to call it.
 	The function provides you with the advantage that it is
	defined one time and can be executed many times so it
	takes the same size in the memory whatever how many
	times it would be called.
	When you call a function, you can send to it some
	inputs and it could return back an output.
	One example of the functions is the printf function that
	takes a string as an input argument and print it on the screen.
	Any C project composed of one function or more, the
	most popular function is the main function which the
	first function to be called (The entry point).

*/

/*				Function Syntax:

	1- The prototype:
		Used to declare the function 
		ex : return_type Function_Name (Input_Type Input_Name , ...... );

	2-The function body (The implementation ):
		Used to define the function behavior
		ex:
		return_type Function_Name (Input_Type Input_Name , ......)
		{
			Function statements
		}
	
	3-Function call:
		Used to execute the function
		ex : Output = Function_Name(Inputs)
*/



#include<stdio.h>

//frist is the prototype of the functions
int Add(int x,int y); 

void main(void)
{
	//Function call
	int val = Add(3,4);
	printf("The Result is %d\n",val);

}

//function implementation
int Add(int x,int y)
{
	int z = x+y ;
	return z;
}







