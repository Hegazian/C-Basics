/*	Write a C code that ask the user to enter 10 values and save them in an array
	using a for loop. Then ask the user to enter a value to search about, if the value
	existing in the 10 values, the program will print “Value Exists x times” where x
	defines how many times the value exists. If the value is not exist, the program
	will print “Value Not Exist”. Use Linear Searching Algorithm.

*/

#include<stdio.h>

void main(void)
{
	
	int array[10];
	int temp =0 ;
	int x;
	//initializing array using for loop
	for(int i =0; i<10;i++)
	{
		printf("Please Enter Element %d in array :",i);
		scanf("%d",&array[i]);
	}
	
	printf("Please Enter The Value You Want to search: ");
	scanf("%d",&x);	

	for(int j =0; j<10;j++)
	{
		if(array[j]==x)
		{
			temp++;
		}
	}

	
	if(temp != 0)
	{
		printf("Value Exists %d times\n",temp);
	}
	else
	{
		printf("Value NOT Exists\n");
	}
}
