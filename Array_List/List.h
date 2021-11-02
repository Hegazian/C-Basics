/*
 * List.h
 *
 *  Created on: Oct 27, 2021
 *      Author: aaa
 */

#ifndef LIST_H_
#define LIST_H_

typedef int EntryType;
#define Max	10


#include<stdio.h>

typedef struct List
{
	EntryType entry[Max];
	EntryType Head;
	int size;
}List;


void CreateList(List* pl);

void Insert(EntryType e,int p,List* pl);

void Delete(int* pe,int p,List* pl);

EntryType ListHead(List* pl);

int IsListEmpty(List* pl);

int IsListFull(List* pl);

int ListSize(List* pl);

void ClearList(List* pl);

void RetrieveElement(int* pe,int p,List* pl);

void ReplaceElement(int e,int p,List* pl);

void TraverseList(List* pl,void (*pf)(EntryType));



#endif /* LIST_H_ */
