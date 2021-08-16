/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/* variable is a part from the memory used to hold a piece of data
   the variable has a type, name , and value
   the types of variables differs in size and/or data to be saved
*/

	/////////Types of variables //////
// int it is a decimal type and it holds 4 bytes
// cahr it is a decimal type and it holds one bytes
// float it is a floating type and it holds 4 bytes
// double it is a floating type and it holds 8 bytes


//intialate variables
//type,name,value
  char x = 9;
  int  y;
  float z = 6.25;


/////// printing variable /////


#include<stdio.h>

int v = 10;

void main(void)
{
	/* to print a variable in c we should use a formet to define it is a variable not a string 
	   format like %d it is used for integare variables and this format is replaced by variable
           I pass as a second parameter*/

	printf("The variable V is %d",v);
}




/* formates examples
	%d Format specifier for decimal value
	%f Format specifier for floating value
	%c Format specifier for character value
*/
