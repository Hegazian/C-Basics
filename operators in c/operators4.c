/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

// Relation Operators : This operators are used to check the relation between new values and 				return either true or false.
   
/* there are many types of Relation Operators 

	1-check equality x == y 
	2-check NOT equality x != y
	3-check More than x > y
	4-check Less than x < y
	5-check more than or equal x >= y 
	6-check less than or equal x <= y

	if we tried to print results false will print a Zero 
	And True will print Not Zero (any value from 1 to 255)
*/


#include<stdio.h>


void main(void)
{

	//make variables that will hold the input
	int x = 0;
	int y = 0;
	printf("please Enter number1: ");
	scanf("%d",&x);
	printf("\nplease Enter number2: ");
	scanf("%d",&y);
	printf("\n x==y >>>>> %d",x==y);
	printf("\n x!=y >>>>> %d",x!=y);
	printf("\n x>y >>>>>> %d",x>y);
	printf("\n x>=y >>>>> %d",x>=y);
	printf("\n x<y >>>>>> %d",x<y);
	printf("\n x<=y >>>>> %d\n",x<=y);


}
