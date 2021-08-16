/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/* 	while loop is used to apply code when its condition is True 
	otherwithe it skip the code inside while

	syntax:
		while ( condition )
		{
		loop body statements
		}
*/
		

#include<stdio.h>


void main()
{
	//ask user to Enter a number
	int x = 0;
	printf("\nPlease Enter a number : ");
	scanf("%d",&x);
	//the program will repeat asking you untile you enter number 10
	while(x != 10)
	{
		printf("\nTry Again");
		printf("\nPlease Enter a number : ");
		scanf("%d",&x);
	}
	//if you enter number 10 the program will be ended.
	
}
