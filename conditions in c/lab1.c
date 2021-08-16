/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/*	Write a C code to calculate employee
	salary in a week based on the his
	working hours, hour rate is 50.
	The program will ask the user to enter
	the working hours, then it will print his salary.
	But if the working hours are less than 40
	hours, a 10% deduction will be applied.
*/

#include<stdio.h>

void main()
{
	int employee_salary = 0;
	int working_hours = 0;
	int hour_rate = 50;
	printf("Please Enter Your Working Hours: ");
	scanf("%d",&working_hours);
	employee_salary = working_hours*hour_rate;
	if(working_hours < 40)
	{
	   employee_salary = working_hours*hour_rate - (working_hours*hour_rate)*0.1 ;
	}
	
	printf("\nYour Salary is %d\n",employee_salary);	

}
