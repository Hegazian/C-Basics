/*
 * stack_program.c
 *
 *  Created on: Oct 2, 2021
 *      Author: aaa
 */

#include "stack_interface.h"

void CreatStack(Stack *ps)
{
	ps->top = 0;
}

void Push(EntryType element,Stack *ps)
{
	ps->entry[ps->top]= element;
	ps->top++;
}

int StackFull(Stack *ps)
{
	if(ps->top == 10)
		return 1;
	else
		return 0;
}

int IsStackFull(Stack *ps)
{
	return(ps->top == 10);
}

void Pop(EntryType *pe,Stack *ps)
{
	ps->top--;
	*pe = ps->entry[ps->top];
}

int pop(Stack *ps)
{
	ps->top--;
	EntryType e = ps->entry[ps->top];
	return e;
}

int IsStackEmpty(Stack *ps)
{
	return ps->top == 0;
}


void StackTop(EntryType *pe,Stack *ps)
{
	*pe = ps->entry[ps->top-1];
}

int stacktop(Stack *ps)
{
	return ps->entry[ps->top-1];
}

int StackSize(Stack *ps)
{
	return ps->top;
}

void ClearStack(Stack *ps)
{
	ps->top = 0;
}


void TraverseStack(Stack *ps,void (*pf)(EntryType))
{
	for(EntryType i=ps->top;i>0;i--)
	{
		(*pf)(ps->entry[i-1]);
	}
}



