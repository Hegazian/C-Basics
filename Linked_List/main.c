/*
 * main.c
 *
 *  Created on: Nov 2, 2021
 *      Author: aaa
 */


#include<stdio.h>
#include"List.h"

void PrintList(int e)
{
	printf("%d\n",e);
}

void main(void)
{
	List l;
	CreateList(&l);
	Insert(1,0,&l);
	Insert(2,1,&l);
	Insert(3,2,&l);
	Insert(4,3,&l);

	int h = ListHead(&l);
	printf("The Head of List is: %d\n",h);

	printf("The List Has:\n");
	TraverseList(&l,&PrintList);


}
