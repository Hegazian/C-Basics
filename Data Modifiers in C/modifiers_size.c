/*	modifier size: This category affects the size of the data type, it has two modifiers:
		1- short
			This modifier comes only with int data type. short int is not less than 2 bytes.
		2- long
			This modifier comes only with int and double data types.
			long int -> not less than 4 bytes
			long double -> not less than 10 bytes
*/

/*	Notes:
		1- If you defined int variable without size modifier, the default may be short or long
		according to the compiler.
		2- In most compilers, you can define short int like this:
			short x;
		without mentioning the word int. Because the short keyword comes only with int.
		3- Size of data types is not standard ! and may differ from environment to another.
*/

/*	The C standard defines a lower limit for the size of each data type. But the exact value
	may be different between compilers. For example, the C standard states that the char
	data type is not less than 1 byte. So you can find a compiler defines the char with size 1
	byte and another compiler defines the char with size 2 bytes. Both of theses compilers
	are following the standard.
							
	Basic types limits in C standard:
			char not less than 1 byte
			short int not less than 2 byte
			long int not less than 4 byte
			float not less than 4 byte
			double not less than 8 byte
			long double not less than 10 byte
*/

/*	there is a problem that every compile has different size for its modifiers data types 
	and the solution for this is to make spcial data types depends on its size so it can fit all compilers
	we can do this by using typedef keyword
	syntax:
		typedef old_type new_type;
	example:
		typedef unsigned short int u16;

	The most common notation used world wide is:
		u -> for unsigned 
		s -> for signed
		f -> for floating
	so, u16 mean that this data type is unsigned and its size is 16 bits (2 bytes)
*/

/*
	Use typedef keyword to define our new
	types. Then print their size using the sizeof
	operator to ensure that they are correctly
	defined .
*/



#include<stdio.h>

typedef unsigned char      u8 ;
typedef unsigned short int u16;
typedef unsigned long  int u32;
typedef signed   char      s8 ;
typedef signed   short int s16;
typedef signed   long  int s32;
typedef float              f32;
typedef double             f64;


void main(void)
{
	int uc = sizeof(u8);
	int usi = sizeof(u16);
	int uli = sizeof(u32);
	int sc = sizeof(s8);
	int ssi = sizeof(s16);
	int sli = sizeof(s32);
	int f = sizeof(f32);
	int d = sizeof(f64);

	printf("Size of u8   is %d  bytes\n",uc);
	printf("Size of u16  is %d  bytes\n",usi);
	printf("Size of u32  is %d  bytes\n",uli);
	printf("Size of s8   is %d  bytes\n",sc);
	printf("Size of s16  is %d  bytes\n",ssi);
	printf("Size of s32  is %d  bytes\n",sli);
	printf("Size of f32  is %d  bytes\n",f);
	printf("Size of f64  is %d  bytes\n",d);
}




