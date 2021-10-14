/*
 * stack_interface.h
 *
 *  Created on: Oct 1, 2021
 *      Author: aaa
 */

#ifndef STACK_INTERFACE_H_
#define STACK_INTERFACE_H_



#define MaxStack	10
typedef int	EntryType ;

//creat data type for stack
typedef struct Stack
{
	EntryType top;
	EntryType entry[MaxStack];
}Stack;

//create function for inializing empty stack
void CreatStack(Stack *ps);

//create push function to push elements to stack
void Push(EntryType element,Stack *ps);

//before push an element to stack you should check frist if stack is full
//create a boolean function to check if the stack is full
int StackFull(Stack *ps);


//create a boolean function to check if the stack is full
int IsStackFull(Stack *ps);

//create a Pop function to delete the top element from stack and store it in variable if you want(optional)
void Pop(EntryType *pe,Stack *ps);

int pop(Stack *ps);

//before using pop function you should check if stack is empty
//create IsStackEmpty function to check if stack is empty
int IsStackEmpty(Stack *ps);

//StackTop is a fuction Which copy the top of stack and return it to
//variable pointer or normal variable
void StackTop(EntryType *pe,Stack *ps);

int stacktop(Stack *ps);

//StackSize is a fuction which return the size of stack
int StackSize(Stack *ps);

//ClearStack is a fuction which Clear the stack by 0
void ClearStack(Stack *ps);

/*	TraverseStack is a fuction which go through every element in stack
	and do any function to it
	so it takes two pointers one for stack and the other for function you want to do
*/
void TraverseStack(Stack *ps,void (*pf)(EntryType));





#endif /* STACK_INTERFACE_H_ */
