/*
 * main.c
 *
 *  Created on: Oct 26, 2021
 *      Author: aaa
 */


#include<stdio.h>
#include"Queue.h"

void PrintQueue(EntryType e)
{
	printf("%d\n",e);
}

void main(void)
{
	int x,y,z;
	Queue q;
	CreateQueue(&q);
	Append(5,&q);
	Append(6,&q);
	Append(7,&q);
	printf("The Elements in Queue are: ");
	TraverseQueue(&q,&PrintQueue);

	Serve(&x,&q);
	Serve(&y,&q);
	Serve(&z,&q);
	printf("The Served Elements are: \n%d\n%d\n%d\n",x,y,z);
}
