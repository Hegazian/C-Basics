/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/*	Write a login program in C that ask the
	user to enter his ID and his password, if
	the ID is correct the system will ask the
	user to enter his password up to 3 times,
	if he enters the password right the
	systems welcomes him, if the three times
	are incorrect, the system print No more
	tries. If the user ID is incorrect the
	system print You are not registered
*/

#include <stdio.h>

void main(void)
{
	int id,pass; 
	int iterator =0;
	int flag = 0;	
	printf("Please Enter Your ID : ");
    	scanf("%d",&id);
	switch(id)
	{
		case 1234: 
			printf("Please Enter Password: ");
		        for (iterator = 0; iterator <3; iterator++)
			{
				scanf ("%d",&pass);
				if(pass == 7788)
				{
					printf("Welcome Ahmed\n");
					flag = 1;
					break;
				}
					   
				else if (iterator<2)
				{
					printf("Try again: ");
				}
			}
			break;
				   
		case 5678: 
			printf("Please Enter Password: ");
		        for (iterator = 0; iterator <3; iterator++)
			{
				scanf ("%d",&pass);
				if(pass == 5566)
				{
					printf("Welcome Amr\n");
					flag = 1;
					break;
				}
					   
				else if (iterator<2)
				{
					printf("Try again: ");
				}
			}
			break;
				   
		case 9870: 
			printf("Please Enter Password: ");
		        for (iterator = 0; iterator <3; iterator++)
			{
				scanf ("%d",&pass);
				if(pass == 1122)
				{
					printf("Welcome Wael\n");
					flag = 1;
					break;
				}
					   
				else if (iterator<2)
				{
					printf("Try again: ");
				}
			}
			break;
				   
		default  : 
			printf("Incorrect ID, You are not registered\n");
		        flag = 2;
	}
	
	if (flag == 0)
	{
		printf("Incorrect password for 3 times, No more tries\n");
	}
}
