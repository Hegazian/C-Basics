/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/*	Write a C code that ask the user
	to enter a number and check if it
	is Even or Odd number
*/

#include<stdio.h>

void main()
{
	//variable x to hold a numer the user will enter
	int x = 0;
	//type variable is to tell if number is Odd(1) or Even(0)
	int type = 0;
	printf("Please Enter Your Number: ");
	scanf("%d",&x);
	type = x%2;
	if(type != 0)
	{
	    printf("\nYour Number is Odd\n");
	}
	
	else
	{
	    printf("\nYour Number is Even\n");
	}	

}
