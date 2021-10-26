/*
 * Queue.c
 *
 *  Created on: Oct 16, 2021
 *      Author: aaa
 */


#include "Queue.h"

void CreateQueue(Queue *pq)
{
	pq->front = 0;
	pq->rear = -1;
	pq->size = 0;
}


void Append(EntryType element,Queue *pq)
{
	/*if(pq->rear == MaxSize-1)
		pq->rear=0;
	else
		pq->rear++;
	*/
	pq->rear = (pq->rear+1)%MaxSize;
	pq->entry[pq->rear]=element;
	pq->size++;
}

void Serve(EntryType *pe,Queue *pq)
{
	*pe = pq->entry[pq->front];
	/*if(pq->front == MaxSize-1)
			pq->front=0;
		else
			pq->front++;
	*/
	pq->front = (pq->front+1)%MaxSize;
	pq->size--;
}


int IsQueueEmpty(Queue *pq)
{
	return !pq->size;
}


int IsQueueFull(Queue *pq)
{
	return (pq->size == MaxSize);
}


int QueueSize(Queue *pq)
{
	return pq->size;
}


void ClearQueue(Queue *pq)
{
	pq->front = 0;
	pq->rear = -1;
	pq->size = 0;
}


void TraverseQueue(Queue *pq,void (*pf)(EntryType))
{
	int pos,s;
	for(pos=pq->front,s=0;s<pq->size;s++)
	{
		(*pf)(pq->entry[pos]);
		pos=(pos+1)%MaxSize;
	}
}
