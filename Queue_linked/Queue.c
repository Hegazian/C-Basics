/*
 * Queue.c
 *
 *  Created on: Oct 25, 2021
 *      Author: aaa
 */

#include<stdlib.h>
#include"Queue.h"

void CreateQueue(Queue *pq)
{
	pq->front = NULL;
	pq->rear = NULL;
	pq->size = 0;
}


void Append(EntryType element,Queue *pq)
{
	Node* pn = (Node*) malloc(sizeof(Node));

	pn->value = element;
	pn->next = NULL;

	if(!pq->rear)
		pq->front=pn;
	else
		pq->rear->next = pn;

	pq->rear = pn;
	pq->size++;
}

void Serve(EntryType *pe,Queue *pq)
{
	Node* pn = pq->front;
	*pe = pn->value;
	pq->front = pn->next;
	free(pn);
	if(!pq->front)
		pq->rear=NULL;
	pq->size--;
}

int IsQueueEmpty(Queue *pq)
{
	return !pq->front;
}

int IsQueueFull(Queue *pq)
{
	return 0;
}

int QueueSize(Queue *pq)
{
	return pq->size;
}

void ClearQueue(Queue *pq)
{
	while(pq->front)
	{
		pq->rear = pq->front->next;
		free(pq->front);
		pq->front = pq->rear;
	}
	pq->size = 0;
}

void TraverseQueue(Queue *pq,void (*pf)(EntryType))
{
	Node* pn;
	for(pn=pq->front;pn;pn=pn->next)
	{
		(*pf)(pn->value);
	}
}
