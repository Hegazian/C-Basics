/*	Write a C code that calculates the summation of an array using a pointer on its first element. */



#include <stdio.h>


void main (void)
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int Sum=0;
	int i;
	int *ptr = &arr[0];
	
	for(i=0; i<10; i++)
	{
		Sum += *ptr;
		ptr++;
	}
	
	printf("The sum of the array is:  %d\n",Sum);
}
