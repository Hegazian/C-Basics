/*	struct data type: This data type contains many types under the same umbrella.
	Syntax:
		struct struct_name
		{
		member_1_Type member_1_Name ;
		member_2_Type member_2_Name;
		};
	Example:
		//This example creates a structure named Employee. This structure has two members one called 			ID and the other called Salary.
		struct Employee
		{
			u8 ID;
			u16 Salary;

		};

	Creating object from structure:
	Syntax:
		struct struct_name object_name;  //Non initialized variable, it would have a garbage values
		Or
		struct struct_name object_name = { member_1_Value , Member_2_Value, .... }
	Example:
		struct Employee Ahmed;
		or
		struct Employee Ali = { 11 , 3000 }; // 11 is the ID and 3000 is the salary

	Accessing Structure elements:
	We use the dot operator ( . ) to access any member in the structure.
	Syntax:
		object_name.member_name
	Example:
		Ahmed.salary = 5000;
		Ahmed.ID = 22;



	You can create some objects when
	declaring a structure at the same
	statement.
	Note that the scope of these objects
	are the same as the scope of the
	structure itself.
	In this example, Ahmed, Ali and
	Mohamed are objects from the
	structure Employee.
	Example:
		struct Employee 
		{
			u8 ID;
			u16 Salary;
		}Ahmed,Ali,Mohamed;
		
*/


#include<stdio.h>

typedef unsigned char      u8 ;
typedef unsigned short int u16;

struct Employee
{
	u8 ID;
	u16 salary;
};

void main(void)
{
	struct Employee Ahmed = {22,5000};
	printf("Ahmed`s ID is %d \n", Ahmed.ID);
	printf("Ahmed`s Salary is %d \n",Ahmed.salary);
} 



