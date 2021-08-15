/*	Write a C code that ask the user to enter 10
	values and save them in an array using a for
	loop. Then print the summation and the
	average of the values entered.
*/



#include<stdio.h>

void main(void)
{
	
	int array[5];
	int sum =0;
	int avg=0;
	//initializing array using for loop
	for(int i =0; i<5;i++)
	{
		printf("Please Enter Element %d in array :",i);
		scanf("%d",&array[i]);
		sum = sum + array[i];
	}
	avg = sum/5;
	printf("\nsum of array elements = %d",sum);
	printf("\nAverage of array elements = %d\n",avg);


}
