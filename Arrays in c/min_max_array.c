/*
	Write a C code that ask the user to enter 10 values and save them in an array
	using a for loop. Then print the minimum and the maximum of the values.
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
	
	//sorting array 	
	for(int j =0; j<10;j++)
	{
		for(int k =0;k<10;k++)
		{
			if(array[j]>array[k])
			{
				temp = array[j];
				array[j] = array[k];
				array[k] = temp;
			}
		}	
	}


	printf("Maximum Number in Array is %d\n",array[0]);
	printf("Minimum Number in Array is %d\n",array[9]);

}
