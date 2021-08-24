/*	there are spcial types of pointers like:
		1-Dangling pointer -> is a pointer that points to deleted or de-allocated object.
		2-Wild pointer is -> any pointer that is used before initialization.
*/

#include<stdio.h>

int* func(void);

void main(void)
{
	//ptr1 is a Wild pointer
	int *ptr1;
	printf("%d\n",*ptr1);	
	//ptr2 is a Dangling pointer cause x is a local variable so pointer points to de-allocated object
	int *ptr2 = func();
	printf("%d\n",*ptr2);

}


int* func(void)
{
	int x = 10;
	return &x;
}
