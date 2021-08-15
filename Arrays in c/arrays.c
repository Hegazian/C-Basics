/*
	array is a group of data that holds fixed number of value all of them are the same type
	
	Syntax:
		Array_Type Array_Name[Length];
	Example:
		int array[5];	//This line creates an array of int of size 5.
	Notes:
		1- The array index always starts from 0, 
		it means that this array has elements from element 0 till element 4.
		2- Array length must be constant value, can not be variable.


	Array can be initialized at the time of definition. To initialize the arry use the following 		syntax:
		Array_Type Array_Name[Length] = { values separated by comma };
	Example:
		int array[5]={1,2,3,4,5};
	also array can be initialized elmenent by element
	Example:
		int array[5];
		array[0]=1;
		array[1]=2;
		array[2]=3;
		array[3]=4;
		array[4]=5;
	Special Cases:
		1- Initializing the array with values less than its length, the remaining elements will be 			initialized with 0 [defualt].
		2- Initializing the array with values more than its length, it would gives a compilation error.

*/



#include<stdio.h>

void main(void)
{
	//initializing array at the time of definition
	int array_1[5]={1,2,3,4,5};
	int array_2[5];
	//printing array Element by Element
	printf("Number in Element 0 in array_1 is array_1[0]=%d\n",array_1[0]);
	printf("Number in Element 1 in array_1 is array_1[1]=%d\n",array_1[1]);
	printf("Number in Element 2 in array_1 is array_1[2]=%d\n",array_1[2]);
	printf("Number in Element 3 in array_1 is array_1[3]=%d\n",array_1[3]);
	printf("Number in Element 4 in array_1 is array_1[4]=%d\n",array_1[4]);
	printf("\n\n\n");
	//initializing array using for loop
	for(int i =0; i<5;i++)
	{
		printf("Please Enter Element %d in array_2 :\n",i);
		scanf("%d",&array_2[i]);
	}
	//printing array using for loop
	for(int j=0;j<5;j++)
	{
		printf("Number in Element %d in array_2 is array_2[%d]=%d\n",j,j,array_2[j]);
	}


}














