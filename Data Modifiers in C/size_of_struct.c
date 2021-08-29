/*	Write a C code to print the size of this structure
	and verify that it meets your expectations.
	After that modify the structure to achieve the a
	minimum size. Can you see the difference ... ?
	Note that:
	Your tool chain consider that the memory width
	is 4 byte.
*/

#include "stdio.h"
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int  u32;

void main(void)
{
	typedef struct
	{
		u16  x;
		u32  y;
		u16  z;
		u32  k;
	}mystruct;
	
	printf("Size of sturct is %d", sizeof(mystruct));
}
