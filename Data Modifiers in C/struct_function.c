/*	Structure can be passed by value to a function and also can be returned by function.
	Example:
		Function takes structure as an input argument
		void function_2(struct Employee x);
	Example:
		Function returns a structure
		struct Employee function_1(void);
*/


/*			using typedef with structure
	typedef can be used with structure. It would add the value of defining an object
	from structure by the structure name only without mentioning the word struct.
	Example:
		struct MyStruct	
		{
			u8 ID;
			u16 Salary;
		};
		typedef struct MyStruct Employee;
		//Now, we can create an object from Employee directly.
		Employee Ahmed;
		
		OR
		
		We can use typedef keyword at the moment of declaring the structure in the same statement
		typedef struct MyStruct	
		{
			u8 ID;
			u16 Salary;
		}Employee;
		Employee Ahmed;
*/




#include <stdio.h>

typedef unsigned short int u16;

struct MyStruct
{
	u16 Salary    ;
	u16 Bonus     ;
	u16 Deduction ;
}Employee;

void main(void)
{
	Employee Ahmed,Amr,Walead;
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


