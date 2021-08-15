/*	Write a C code that ask the user to enter 10
	values and save them in an array using a for
	loop. The code then sorting array and 
	then print the values after sorting.
*/

#include<stdio.h>

void main(void)
{
	
	int array[10];
	int temp;
	//initializing array using for loop
	for(int i =0; i<10;i++)
	{
		printf("Please Enter Element %d in array :",i);
		scanf("%d",&array[i]);
	}
	
	printf("Values after sorting are : \n");	
	//this algorithm known as Bubble sorting
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

	for(int m=0;m<10;m++)
	{
		printf("%d\n",array[m]);
	}
	
}
