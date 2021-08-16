/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/*	Loops are a part of C programming used to repeat a specific
	block of code.
	We need to repeat the a specific code for
	two reasons:
		1- Repeat the code for defined number of iterations
		for ex: repeat a part of code for 10 times
		In this case we usually use for loop

		2- Repeat the code until a certain event happens	
		for: repeat a part of code until the user enter x
		In this case we usually use while loop or do while loop
*/
	
/*					FOR LOOP
	

			Syntax:

			for ( start; condition; action )
			{
				loop body statements
			}

*/

#include<stdio.h>

void main()
{
	//repeat printing my name for 10 times
	int i;
	for(i=0;i<10;i++)
	{
		printf("\nHegazian");
	}
}

