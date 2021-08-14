/*	Write a C program the implement 2 function:
	1- Function to get the maximum of 4 values
	2- Function to get the minimum of 4 values
	The program will ask the user first to enter the 4 values, then print the maximum
	number and minimum number of them.
*/




#include<stdio.h>

//frist is the prototype of the functions
int Get_Max(int x,int y,int z,int j); 
int Get_Min(int x,int y,int z,int j);

void main(void)
{
	int n1, n2, n3, n4, max, min; 
	printf("Please Enter Frist number : ");
	scanf("%d",&n1);
	printf("Please Enter second number : ");
	scanf("%d",&n2);
	printf("Please Enter Third number : ");
	scanf("%d",&n3);
	printf("Please Enter Fourth number : ");
	scanf("%d",&n4);
	//Function call
	max = Get_Max(n1,n2,n3,n4);
	min = Get_Min(n1,n2,n3,n4);
	printf("The Maximum number is %d\n",max);
	printf("The Minimum number is %d\n",min);

}
//MAX_function implementation
int Get_Max(int x,int y,int z,int j)
{
	int max;
	if(x>y)
	{
		max = x;
		if(x>z)
		{
			max = x;
			if(x>j)
			{
				max = x;
			}
			else
			{	
				max = j;
			}
		}
		else
		{
			max = z;
			if(z>j)
			{
				max = z;
			}
			else
			{
				max = j;
			}
		}
	}
	else
	{
		max = y;
		if(y>z)
		{
			max = y;
			if(y>j)
			{
				max = y;
			}
			else
			{
				max = j;
			}
		}
		else
		{
			max = z;
			if(z>j)
			{
				max = z;
			}
			else
			{
				max = j;
			}
		}
	}
	
	return max;
}




//MIN_function implementation
int Get_Min(int x,int y,int z,int j)
{
	int min;
	if(x<y)
	{
		min = x;
		if(x<z)
		{
			min = x;
			if(x<j)
			{
				min = x;
			}
			else
			{	
				min = j;
			}
		}
		else
		{
			min = z;
			if(z<j)
			{
				min = z;
			}
			else
			{
				min = j;
			}
		}
	}
	else
	{
		min = y;
		if(y<z)
		{
			min = y;
			if(y<j)
			{
				min = y;
			}
			else
			{
				min = j;
			}
		}
		else
		{
			min = z;
			if(z<j)
			{
				min = z;
			}
			else
			{
				min = j;
			}
		}
	}
	
	return min;
}

