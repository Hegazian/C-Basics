/*
 * main.c
 *
 *  Created on: Oct 8, 2021
 *      Author: aaa
 */


#include<stdio.h>
#include"linked_stack.h"

void Display(int e){
	printf("%d\n",e);
}


void main(void)
{
	int sz,t;
	Stack s;
	CreatStack(&s);
	Push(5,&s);
	Push(6,&s);
	Push(7,&s);
	Push(8,&s);
	Push(9,&s);
	Push(10,&s);
	StackTop(&t,&s);
	sz = StackSize(&s);
	printf("The Top of Stack is %d\n",t);
	printf("The Size of Stack is %d\n",sz);
	printf("The Stack Entry is :\n");
	TraverseStack(&s,&Display);

}
