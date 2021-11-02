/*
 * List.c
 *
 *  Created on: Nov 1, 2021
 *      Author: aaa
 */

#include"List.h"
#include<stdio.h>
#include<stdlib.h>

void CreateList(List* pl)
{
	pl->Head = NULL;
	pl->size = 0;
}


int IsListEmpty(List* pl)
{
	return (pl->size == 0);
	//or !pl->size
}


int IsListFull(List* pl)
{
	Node* pn;
	return (!(pn = (Node*)malloc(sizeof(Node))));
}


int ListSize(List* pl)
{
	return pl->size;
}


void ClearList(List* pl)
{
	Node* pn;
	while(pl->Head)
	{
		pn = pl->Head->next;
		free(pl->Head);
		pl->Head = pn;
	}
	pl->size = 0;
}


void TraverseList(List* pl,void (*pf)(EntryType))
{
	Node* pn = pl->Head;
	while(pn)
	{
		(*pf)(pn->data);
		pn = pn->next;
	}
}


void Insert(EntryType e,int p,List* pl)
{
	if(p <= pl->size)
		{
		Node* pn = (Node*) malloc(sizeof(Node));
		pn->data = e;
		pn->pos = p;
		pn->next = NULL;
		if(p == 0)
		{
			pn->next = pl->Head;
			pl->Head = pn;
		}

		else
		{
			Node* q;
			q = pl->Head;
			for(int i =0;i<p-1;i++)
				q = q->next;
			pn->next = q->next;
			q->next = pn;
		}

		pl->size++;
	}
	else
		printf("The Position You Want to Insert element In Is Not Available!");
}


void Delete(int* pe,int p,List* pl)
{
	Node *pn,*qn;
	if(p < pl->size)
	{
		if(p == 0)
		{
			*pe = pl->Head->data;
			pn = pl->Head->next;
			free(pl->Head);
			pl->Head = pn;
		}
		else
		{
			qn = pl->Head;
			for(int i=0;i<p-1;i++)
				qn = qn->next;
			pn = qn->next->next;
			*pe = qn->next->data;
			free(qn->next);
			qn->next = pn;
		}
		pl->size--;
	}
	else
		printf("There is Not element in Position You Entered!");

}


void RetrieveElement(int* pe,int p,List* pl)
{
	Node* pn = pl->Head;
	int i;
	for(i=0;i<p;i++)
		pn = pn->next;
	*pe = pn->data;
}

void ReplaceElement(int e,int p,List* pl)
{
	Node* pn = pl->Head;
	int i;
	for(i=0;i<p;i++)
		pn = pn->next;
	pn->data = e;
}

EntryType ListHead(List* pl)
{
	return pl->Head->data;
}
