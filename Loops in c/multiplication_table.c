/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/*	Write a program in C to display the
	multiplication table of a given integer.
*/


#include<stdio.h>


void main()
{
	//ask user to Enter a number
	int x = 0;
	int multi = 0;
	int y = 0;
	printf("\nPlease Enter a number for multiplication table : ");
	scanf("%d",&x);
	//the program will repeat untile x = y
	while(y <= x)
	{
		multi = x*y;
		printf("\n%d X %d = %d",x,y,multi);
		y++;
	}

	
}
