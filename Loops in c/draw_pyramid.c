/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/*
		Write a c program that draw a pyramid of
		stars with height entered by the user
*/


#include <stdio.h>

void main(void)
{
	int h,i,j; 

	printf("Please Enter Pyramid Height : ");
    	scanf("%d",&h);

	for(i=0;i<h;i++)
	{
		for(j=0;j<h-i-1;j++)
		{		
			printf(" ");
		}
		for (j=0; j<2*i+1; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}
