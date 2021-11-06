/*
	A linked list is a type of data structure that contains a list of data of any type like
	numbers, characters or any other type. It looks like an array but the main
	difference is that the linked list length can be changed dynamically. i.e. It can be
	increased or decreased in the run time.
	Each element of the list must have a link to next element. The last element in
	the list shall be linked to NULL.

/*
	Write a C code that allow the user to add
	a node to linked list by pressing 0 and to
	print the linked list by pressing 1. The
	software shall continue forever till the
	user enters 2. If the user enters any
	other numbers the software shall print
	incorrect entry. See the following
	scenarios for more details.
*/


#include<stdio.h>
#include<stdlib.h>

typedef int DataType;

typedef struct Node
{
	DataType data;
	struct Node* next;
}Node;

typedef struct List
{
	Node* Head;
	int size;
}List;

void CreateList(List* pl)
{
	pl->Head=NULL;
	pl->size=0;
}



void AddElement(DataType e,List* pl)
{
	Node* p;
	Node* pe = (Node*) malloc(sizeof(Node));
	pe->data = e;
	pe->next = NULL;
	
	if(pl->size==0){
		//pe->next = pl->Head;
		pl->Head = pe;
	}
	else
	{
		p = pl->Head;
		for(int i =0;i<pl->size-1;i++)
			p = p->next;
		pe->next = p->next;
		p->next = pe;
	}
	pl->size++;	
}

void PrintList(List* pl)
{
	if(pl->size == 0)
		printf("The List is Empty!");
	else
	{
		int i =0;
		Node* pn;
		pn = pl->Head;
		while(pn)
		{
			printf("Node Number %d--> %d\n",i,pn->data);
			pn = pn->next;
			i++;
		}
	}
}

void main(void)
{
	List L;
	CreateList(&L);

	printf("Please Enter The Number of Operation: \n");
	printf("Enter 0 For Adding New Element to list\n"
			"Enter 1 For Printing The list\n"
			"Enter 2 For Exiting The Program\n");
	printf("\n----------------\n");
	
	int flag = 0;
	while(flag == 0)
	{
		int ne;
		int on;
		scanf("%d",&on);
		if(on == 0)
		{
			printf("You Choose Adding a New Element\n");
			printf("Enter Your New Element: ");
			scanf("%d",&ne);
			AddElement(ne,&L);
			printf("\nThe Element is Added.!");
			printf("\n----------------\n");
			
		}
		else if(on == 1)
		{
			printf("You Choose Printing The List\n");
			PrintList(&L);
			printf("\n----------------\n");
		}			
		else if(on == 2)
		{
			printf("\n----------------\n");
			printf("Thank You\nGood Bye"); 
			flag = 1;
		}
		else{
			printf("\n----------------\n");
			printf("Invalid Choice please try again\n");
			printf("\n----------------\n");
		}
	}
}