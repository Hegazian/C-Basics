/*
 * main.c
 *
 *  Created on: Oct 17, 2021
 *      Author: aaa
 */

#include<stdio.h>
#include "Queue.h"


void main(void)
{
	int x,y,z;
	Queue q;
	CreateQueue(&q);
	Append(5,&q);
	Append(6,&q);
	Append(7,&q);
	Serve(&x,&q);
	Serve(&y,&q);
	Serve(&z,&q);

	printf("The Queue Enery has: \n%d\n%d\n%d\n",x,y,z);
}
