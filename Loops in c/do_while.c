/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/* 	do while loop is used to apply block at least once.
	it Apply the loop once then check the condition
	and repeat the loop as long as the condition is true.
*/


/*	Syntax:
	do
	{
		loop body statements
	} while ( condition );
*/

#include<stdio.h>


void main()
{

	int x = 1;
	
	do
	{
		//it will print at least once and repeat if user enter any number but 0 
		printf("I`m in the loop\n");
		scanf("%d",&x);
		printf("\n");
	}while(x!=0);
}
