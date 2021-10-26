/*
 * Queue.h
 *
 *  Created on: Oct 14, 2021
 *      Author: aaa
 */

#ifndef QUEUE_H_
#define QUEUE_H_


typedef int EntryType;
#define MaxSize	10

typedef struct Queue
{
	int front;
	int rear;
	int size;
	EntryType entry[MaxSize];
}Queue;

void CreateQueue(Queue *pq);

void Append(EntryType element,Queue *pq);

void Serve(EntryType *pe,Queue *pq);

int IsQueueEmpty(Queue *pq);

int IsQueueFull(Queue *pq);

int QueueSize(Queue *pq);

void ClearQueue(Queue *pq);

void TraverseQueue(Queue *pq,void (*pf)(EntryType));

#endif /* QUEUE_H_ */
