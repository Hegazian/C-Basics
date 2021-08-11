/*
	Write a C code that ask the user to enter 10
	numbers, then ask him to enter another number
	to search on it in the 10 numbers and print its
	location in case it is found.
	In case the number is not found, it will print
	number no exist
*/

#include<stdio.h>

void main(void){
	int a,b,c,d,e,f,g,h,x,y,z;
	int isexist = 0;
	printf("Enter Number 1 : ");
	scanf("%d",&a);
	printf("Enter Number 2 : ");
	scanf("%d",&b);
	printf("Enter Number 3 : ");
	scanf("%d",&c);
	printf("Enter Number 4 : ");
	scanf("%d",&d);
	printf("Enter Number 5 : ");
	scanf("%d",&e);
	printf("Enter Number 6 : ");
	scanf("%d",&f);
	printf("Enter Number 7 : ");
	scanf("%d",&g);
	printf("Enter Number 8 : ");
	scanf("%d",&h);
	printf("Enter Number 9 : ");
	scanf("%d",&x);
	printf("Enter Number 10 : ");
	scanf("%d",&y);
	printf("Enter The Value : ");
	scanf("%d",&z);
	if(z == a)
	{
	printf("Value at element number 1\n");
	isexist = 1;
	}
	
	if(z == b)
	{
	printf("Value at element number 2\n");
	isexist = 1;
	}
	
	if(z == c)
	{
	printf("Value at element number 3\n");
	isexist = 1;
	}
	
	if(z == d)
	{
	printf("Value at element number 4\n");
	isexist = 1;
	}
	
	if(z == e)
	{
	printf("Value at element number 5\n");
	isexist = 1;
	}
	
	if(z == f)
	{
	printf("Value at element number 6\n");
	isexist = 1;
	}
	
	if(z == g)
	{
	printf("Value at element number 7\n");
	isexist = 1;
	}
	
	if(z == h)
	{
	printf("Value at element number 8\n");
	isexist = 1;
	}
	
	if(z == x)
	{
	printf("Value at element number 9\n");
	isexist = 1;
	}
	
	
	if(z == y)
	{
	printf("Value at element number 10\n");
	isexist = 1;
	}
	
	
	if (isexist == 0)
	{
	printf("value is not exist");
	}
}
	
