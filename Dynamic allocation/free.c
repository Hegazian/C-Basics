/*	Dynamically allocated memory created with either calloc() or malloc()
	doesn't get freed on its own even if it is defined locally in a function. You
	must explicitly use free() to release the space.
	
	free():
		This function frees the space allocated in the memory pointed by pointer.
	Syntax:
		free (pointer_to_block_to_free)
	Example:
		int* ptr;
		ptr = (int*) calloc(10,sizeof(int));
			.........
			some code
			.........
		free(ptr);
*/

#include<stdio.h>
#include<stdlib.h>


void main(void)
{
	
	
	int* ptr;
	ptr = (int*) calloc(10,sizeof(int));
	printf("Befor free function calloc function intialate the ten blocks by zero\n");
	for(int i=0;i<10;i++)
	{
		printf("block number %d has %d\n",i,ptr[i]);
	}
	
	free(ptr);
	printf("After free function ptr is freed from allocation and now it points to garbge\n");
	
	for(int i=0;i<10;i++)
	{
		printf("block number %d has %d\n",i,ptr[i]);
	}
	
	
}