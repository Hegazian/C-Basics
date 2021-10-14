/*
 * stack_program.c
 *
 *  Created on: Oct 2, 2021
 *      Author: aaa
 */

//standard library is included to use NULL keyword
#include<stdlib.h>
#include "linked_stack.h"


void CreatStack(Stack *ps)
{
	ps->top = NULL;
	ps->size = 0;
}

void Push(EntryType element,Stack *ps)
{
	Node *pn = (Node*) malloc(sizeof(Node));
	pn->entry = element;
	pn->Next = ps->top;
	ps->top = pn;
	ps->size++;
}

void Pop(EntryType *pe,Stack *ps)
{
	*pe = ps->top->entry;
	Node *pn;
	pn = ps->top;
	ps->top = ps->top->Next;
	free(pn);
	ps->size--;
}

int IsStackFull(Stack *ps)
{
	return 0;
}

int IsStackEmpty(Stack *ps)
{
	return ps->top == NULL;
}

void StackTop(EntryType *pe,Stack *ps)
{
	*pe = ps->top->entry;
}

void ClearStack(Stack *ps)
{
	Node *pn = ps->top;
	Node *qn = ps->top;

	while(pn)
	{
		pn = pn->Next;
		free(qn);
		qn = pn;
	}
	ps->top = NULL;
	ps->size=0;
}

int StackSize(Stack *ps)
{
	/*Node *pn = ps->top;
	int i = 0;
	while(pn)
	{
		++i;
		pn = pn->Next;
	}
	return i;*/
	return ps->size;
}

void TraverseStack(Stack *ps,void (*pf)(EntryType))
{
	Node *pn = ps->top;
	while(pn)
	{
		(*pf)(pn->entry);
		pn = pn->Next;
	}
}
