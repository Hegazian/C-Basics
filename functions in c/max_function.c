/*	Write C code that will ask the user to enter 2
	numbers, then the main function will call a
	function named Get_Max that takes the 2
	values entered by the user then return the
	maximum of them.
	The main function then will print the
	returned value
*/


#include<stdio.h>

//frist is the prototype of the functions
int Get_Max(int x,int y); 

void main(void)
{
	int n1, n2, m; 
	printf("Please Enter Frist number : ");
	scanf("%d",&n1);
	printf("Please Enter second number : ");
	scanf("%d",&n2);
	//Function call
	m = Get_Max(n1,n2);
	printf("The Maximum number is %d\n",m);

}
//function implementation
int Get_Max(int x,int y)
{
	int max;
	if(x>y)
	{
		max = x;
	}
	else
	{
		max = y;
	}
	
	return max;
}
