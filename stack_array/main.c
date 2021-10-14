/*
 * main.c
 *
 *  Created on: Oct 2, 2021
 *      Author: aaa
 */

#include<stdio.h>
#include "stack_interface.h"


void Display(int e){
	printf("%d\n",e);
}


void main(void){
	int x,y,z;
	Stack s;
	CreatStack(&s);
	Push(5,&s);
	Push(6,&s);
	Push(6,&s);



	//CreatStack(&s);
	//printf("%d\n%d\n%d\n",s.entry[0],s.entry[1],s.entry[2]);

	if(!IsStackFull(&s))
		printf("stack is full!!\n");
	else
		printf("stack is avilable\n");
	/*
	Pop(&x,&s);
	Pop(&y,&s);
	z=pop(&s);
	printf("The Poped element is %d	%d %d\n",x,y,z);*/
	int t;
	//t=stacktop(&s);
	StackTop(&t,&s);
	printf("Stack top is %d\n",t);
	int ss;
	ss=StackSize(&s);
	printf("Stack Size is %d\n",ss);
	TraverseStack(&s,&Display);


}
