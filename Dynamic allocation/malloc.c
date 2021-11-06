/*	Write a C code that apply the bubble
	sorting algorithm on a set of numbers
	entered by the user. The code shall ask
	the user to enter the number of values
	to be sorted, then the code shall ask the
	user to enter the values then print them
	in ascending order
*/

/*	The function malloc() reserves a block of memory of specified size and return a pointer
	to void which can be casted into pointer of any form.
	Syntax
		pointer = (cast_type*) malloc (Size_To_Reserve_In_Bytes)
	Example
		int *ptr;
		ptr = (int*) malloc(4*x);
*/
#include<stdio.h>
#include<stdlib.h>


void main(void)
{
	printf("This program do sorting for Values\n");
	int n=0;
	printf("Please Enter The number of values: ");
	scanf("%d",&n);
	
	int *ptr;
	ptr = (int*) malloc(n);

	
	int temp;
	//initializing array using for loop
	
	for(int i =0; i<n;i++)
	{
		printf("Please Enter Element %d :",i);
		scanf("%d",&ptr[i]);
	}
	
	printf("Values after sorting are : \n");	
	//this algorithm known as Bubble sorting
	for(int j =0; j<n;j++)
	{
		for(int k =0;k<n;k++)
		{
			if(ptr[j]>ptr[k])
			{
				temp = ptr[j];
				ptr[j] = ptr[k];
				ptr[k] = temp;
			}
		}	
	}

	for(int m=0;m<n;m++)
	{
		printf("%d\n",ptr[m]);
	}
	
}

	
