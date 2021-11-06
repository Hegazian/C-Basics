/*	The only difference between malloc() and calloc() is that 
	malloc() allocates single block of memory
	whereas calloc() allocates multiple blocks of memory
	each of same size and sets all bytes to zero.
	The name calloc stands for "contiguous allocation".
	
	Syntax:
		pointer = (cast_type*) calloc ( number_of_Blocks_To_Reserve , Size_Of_Block_In_Bytes )
	Example:
		int* ptr;
		ptr = (int*) calloc(10,sizeof(int));
		This code reserve an array of 10 elements of type int
*/


#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int* ptr;
	ptr = (int*) calloc(10,sizeof(int));
	
	for(int i=0;i<10;i++)
	{
		printf("block number %d has %d\n",i,ptr[i]);
	}
}