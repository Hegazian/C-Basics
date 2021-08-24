/*	Pointer is a data type used to hold an address of another variable.
	Pointers are one of the most important advantages of C programming.
	Syntax:

		Pointee_Type *Pointer_Name;
		Or
		Pointee_Type* Pointer_Name;
		Or
		Pointee_Type * Pointer_Name;
	Example:
		int *ptr;
		int* ptr;
		int * ptr;
	No difference between the 3 syntax. All of them
	define a pointer that points to int type
*/

/*	The "address-of" operator is a unary operator represented by the symbol &.
	It gives the address of any variable if it is preceded the variable name.

	Example:
		int x=10;
		int* ptr;
		ptr = &x;
*/


#include<stdio.h>

void main(void)
{

	int x =10;  //Define int named x and initialize it with value 10
	int* ptr;   //Define pointer to int named ptr
	ptr=&x;     //Initialize ptr with the address of x
	printf("X before Change is : %d\n",x);
	
	*ptr = 50 ;   //this line mean put 50 to address that pointer "ptr" hold
		      //and pointer "ptr" hold address of x as I Initialized before
		      //so x will be 50
	printf("X After Change is : %d\n",x);

}	







