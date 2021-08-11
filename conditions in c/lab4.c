/*
	Login System:
	Write a C code that ask the user to enter his ID and
	then the program will print his name.
	Available IDs are:
	1234-> Ahmed
	5678 -> Youssef
	1145 -> Mina
 	Any other number, the program will print Wrong ID
*/

#include<stdio.h>

void main()
{

	int ID = 0;
	printf("Please Enter Your ID: ");
	scanf("%d",&ID);

	switch(ID)
	{
		case 1234:
			printf("Welcome Ahmed\n");
			break;
		case 5678:
			printf("Welcome Youssef\n");
			break;
		case 1145:
			printf("Welcome Mina\n");
			break;
		default  : 
			printf("Wrong ID\n");
		        break;
	}
}

