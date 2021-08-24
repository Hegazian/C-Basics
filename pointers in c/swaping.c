/*	Write a C code that define 3 int variables x, y and z and 3 pointers to int p, q
	and r. Set x, y, z to three distinct values. Set p, q, r to the addresses of x, y, z
	respectively.
		a-Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
		b-Print the message: Swapping pointers.
		c-Execute the swap code: r = p; p = q; q = r;
		d-Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
*/


#include<stdio.h>

void main()
{
	int x=5,y=6,z=7;
	int*p=&x;
	int*q=&y;
	int*r=&z;

	printf("the value of x,y,z:%d,%d,%d\n",x,y,z);
	printf("the value of p,q,r:%p,%p,%p\n",p,q,r);
	printf("the value of *p,*q,*r:%d,%d,%d\n",*p,*q,*r);
	p=&z;
	q=&x;
	r=&y;
	printf("Swapping pointers\n");
	printf("the value of x,y,z:%d,%d,%d\n",x,y,z);
	printf("the value of p,q,r:%p,%p,%p\n",p,q,r);
	printf("the value of *p,*q,*r:%d,%d,%d\n",*p,*q,*r);
}
