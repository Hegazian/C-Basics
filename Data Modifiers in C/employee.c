/*	Write a c code that defines a structure for
	employees that contains his salary, bonus and
	deductions. The program shall ask the user to
	enter these information for three employees (
	Ahmed, Waleed and Amr). Then the program
	will print the total value shall be supplied by
	finance team.
*/


#include <stdio.h>

typedef unsigned short int u16;

struct Employee
{
	u16 Salary    ;
	u16 Bonus     ;
	u16 Deduction ;
}Ahmed,Amr,Waleed;

void main(void)
{
	u16 Total=0; 
	printf("Please Enter Ahmed Salary: ");
	scanf ("%d",&Ahmed.Salary);
	printf("Please Enter Ahmed Bonus: ");
	scanf ("%d",&Ahmed.Bonus);
	printf("Please Enter Ahmed Deduction: ");
	scanf ("%d",&Ahmed.Deduction);
	
	printf("Please Enter Amr Salary: ");
	scanf ("%d",&Amr.Salary);
	printf("Please Enter Amr Bonus: ");
	scanf ("%d",&Amr.Bonus);
	printf("Please Enter Amr Deduction: ");
	scanf ("%d",&Amr.Deduction);
	
	printf("Please Enter Waleed Salary: ");
	scanf ("%d",&Waleed.Salary);
	printf("Please Enter Waleed Bonus: ");
	scanf ("%d",&Waleed.Bonus);
	printf("Please Enter Waleed Deduction: ");
	scanf ("%d",&Waleed.Deduction);
	
	Total = (Ahmed.Salary + Amr.Salary + Waleed.Salary)+(Ahmed.Bonus
	         + Amr.Bonus + Waleed.Bonus)-(Ahmed.Deduction + Amr.Deduction
			 + Waleed.Deduction);
	
	printf("Total Value Needed is %d \n",Total);
}

