/*
 * List.c
 *
 *  Created on: Oct 27, 2021
 *      Author: aaa
 */


#include"List.h"

void CreateList(List* pl)
{
	pl->Head = 0;
	pl->size = 0;
}

void Insert(EntryType e,int p,List* pl)
{
	if(p<Max)
	{
		int i;
		for(i=pl->size-1;i>=p;i--)
			pl->entry[i+1]=pl->entry[i];
		pl->entry[p]=e;
		pl->size++;
	}
	else
		printf("The Position You Entered is Out Of List Range\n"
				"Please Enter The Number Of Position Between 0 to %d\n",Max);
}

void Delete(int* pe,int p,List* pl)
{
	if(p<Max)
		{
			*pe = pl->entry[p];
			int i;
			for(i=pl->size-1;i>=p;i--)
				pl->entry[i-1]=pl->entry[i];
			pl->size--;
		}
		else
			printf("The Position You Entered is Out Of List Range\n"
					"Please Enter The Number Of Position Between 0 to %d\n",Max);
}

EntryType ListHead(List* pl)
{
	return pl->entry[pl->Head];
}

int IsListEmpty(List* pl)
{
	return !pl->size;
}

int IsListFull(List* pl)
{
	return pl->size == Max;
}

int ListSize(List* pl)
{
	return pl->size;
}

void ClearList(List* pl)
{
	pl->size=0;
}

void RetrieveElement(int* pe,int p,List* pl)
{
	*pe = pl->entry[p];
}

void ReplaceElement(int e,int p,List* pl)
{
	pl->entry[p] = e;
}

void TraverseList(List* pl,void (*pf)(EntryType))
{
	int i;
	for(i=0;i<pl->size;i++)
		(*pf)(pl->entry[i]);
}
