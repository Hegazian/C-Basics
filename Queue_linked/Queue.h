/*
 * Queue.h
 *
 *  Created on: Oct 25, 2021
 *      Author: aaa
 */

#ifndef QUEUE_H_
#define QUEUE_H_

typedef int EntryType;
#define MaxSize	10

typedef struct Node
{
	EntryType value;
	struct Node* next;
}Node;

typedef struct Queue
{
	Node* front;
	Node* rear;
	int size;
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
