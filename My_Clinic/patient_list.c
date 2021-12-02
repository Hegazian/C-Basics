/*
 * patient_list.c
 *
 *  Created on: Nov 24, 2021
 *      Author: aaa
 */


#include"patient_list.h"
#include<stdio.h>
#include<stdlib.h>

void CreateList(List* pl)
{
	pl->Head = NULL;
	pl->size = 0;
	for(int i=0;i<5;i++)
		pl->reservations[i] = 0;
	pl->n = 0;
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
	int flag = 1;
	while(flag == 1)
	{
		print_star();
		printf("****************************************\n"
				"You Choose To Add a New Patient Record\n"
				"***************************************\n");
		e.reservation = 0;
		printf("\npatient name: ");
		scanf("%s",&e.name);
		printf("patient age: ");
		scanf("%d",&e.age);
		printf("patient gender:\n"
				"1- Male\n"
				"2- Female\n"
				"3- Animal\n"
				"Your Choose: ");
		scanf("%d",&e.gender);
		while(e.gender>3 || e.gender<0)
		{
			printf("*************************************************\n"
					"There is No Room For Gay!! Enter Correct Choose\n"
					"*************************************************\n");
			printf("patient gender:\n"
					"1- Male\n"
					"2- Female\n"
					"3- Animal\n"
					"Your Choose: ");
			scanf("%d",&e.gender);
		}
		printf("patient ID: ");
		scanf("%d",&e.id);
		while(FindId(e.id,pl))
		{
			//print_star();
			printf("**************************************\n"
					"ID is Already Exist! Try Another ID\n"
					"*************************************\n");
			printf("patient ID: ");
			scanf("%d",&e.id);
		}
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
		   printf("The Position NO.%d You Want to Insert element In Is Not Available!\n",p);

	   printf("----------------------------\n"
			   "|Patient is Add, Thank You!|\n"
			   "----------------------------\n");
	   printf("Enter 1 For Yes\n"
			   "Enter 2 For No\n"
			   "Do You Want to add Another Patient: ");
	   scanf("%d",&flag);
	}
	 print_star();

}


void Delete(EntryType* pe,int p,List* pl)
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
		printf("There is Not element in Position NO.%d You Entered!\n",p);

}


void RetrieveElement(EntryType* pe,int p,List* pl)
{
	Node* pn = pl->Head;
	int i;
	for(i=0;i<p;i++)
		pn = pn->next;
	*pe = pn->data;
}

void Print_Patient(int id,List* pl)
{
	Node* pn;
	pn = pl->Head;
	for(int i =0;i<pl->size;i++)
	{
		if(pn->data.id == id)
		{
			system("cls");
			printf("------------------------\n");
			printf("Name: %s\n",pn->data.name);
			printf("Age: %d\n",pn->data.age);
			if(pn->data.gender == 1)
				printf("Gender: Male\n");
			else if(pn->data.gender == 2)
				printf("Gender: Female\n");
			else if(pn->data.gender == 3)
				printf("Gender: Animal\n");
			printf("ID: %d\n",pn->data.id);
			if(pn->data.reservation == 0)
				printf("Patient Has No Reservation\n");
			else if(pn->data.reservation == 1)
				printf("Patient Has a Reservation at: 2pm to 2:30pm\n");
			else if(pn->data.reservation == 2)
				printf("Patient Has a Reservation at: 2:30pm to 3:00pm\n");
			else if(pn->data.reservation == 3)
				printf("Patient Has a Reservation at: 3:00pm to 3:30pm\n");
			else if(pn->data.reservation == 4)
				printf("Patient Has a Reservation at: 4pm to 4:30pm\n");
			else if(pn->data.reservation == 5)
				printf("Patient Has a Reservation at: 4:30pm to 5:00pm\n");
			printf("------------------------\n");
			break;
		}
		pn = pn->next;
	}
}

int FindId(int id,List* pl)
{
	int found = 0;
	Node* pn;
	pn = pl->Head;
	for(int i =0;i<pl->size;i++)
	{
		if(pn->data.id == id)
		{
			found = 1;
			break;
		}
		pn = pn->next;
	}
	return found;
}

void ReplaceElement(EntryType e,int p,List* pl)
{
	Node* pn = pl->Head;
	int i;
	for(i=0;i<p;i++)
		pn = pn->next;
	pn->data = e;
}

void Edit_Patient(int id,List* pl)
{
	Node* pn;
	pn = pl->Head;
	for(int i =0;i<pl->size;i++)
	{
		if(pn->data.id == id)
		{
			printf("\npatient name: ");
			scanf("%s",&pn->data.name);
			printf("patient age: ");
			scanf("%d",&pn->data.age);
			printf("patient gender:\n"
					"1- Male\n"
					"2- Female\n"
					"3- Animal\n"
					"Your Choose: ");
			scanf("%d",&pn->data.gender);
			while(pn->data.gender>3 || pn->data.gender<0)
			{
				printf("*************************************************\n"
						"There is No Room For Gay!! Enter Correct Choose\n"
						"*************************************************\n");
				printf("patient gender:\n"
						"1- Male\n"
						"2- Female\n"
						"3- Animal\n"
						"Your Choose: ");
				scanf("%d",&pn->data.gender);
			}
			printf("patient ID: ");
			scanf("%d",&pn->data.id);
			print_star();
			printf("******************\n"
					"Patient Edited\n"
					"*****************\n");
			break;
		}
		pn = pn->next;
	}
}


void Reserve_Slot(int id,List* pl)
{
	Node* pn;
	pn = pl->Head;
	for(int i =0;i<pl->size;i++)
	{
		if(pn->data.id == id)
		{
			break;
		}
		pn = pn->next;
	}

	if(pn->data.reservation == 0)
	{
		printf("******************************\n"
				"Select Your Reservation From: \n"
				"******************************\n");
		Print_Reservations(pl);
		if(pl->n<5)
		{
			printf("Reservation Number: ");
			scanf("%d",&pn->data.reservation);

			while(pn->data.reservation > 5 || pn->data.reservation < 0 || Find_Reservation(pn->data.reservation,pl))
			{
				print_star();
				printf("Please Enter correct Reservation Number: ");
				scanf("%d",&pn->data.reservation);
			}
			pl->reservations[pl->n] = pn->data.reservation;
			pl->n++;
			print_star();
			printf("\t\t\t\t********************************\n"
					"\t\t\t\tReservation is Done! Thank You\n"
					"\t\t\t\t********************************\n");

		}
	}
	else
		printf("Patient Has Already a Reservation\n");


}

void Print_Reservations(List* pl)
{


	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;
	int flag4 = 0;
	int flag5 = 0;

	for(int i=0;i<5;i++)
	{
		if(pl->reservations[i] == 1)
			flag1 = 1;

		if(pl->reservations[i] == 2)
			flag2 = 1;

		if(pl->reservations[i] == 3)
			flag3 = 1;

		if(pl->reservations[i] == 4)
			flag4 = 1;

		if(pl->reservations[i] == 5)
			flag5 = 1;
	}
	if(flag1 == 0)
		printf("1--> 2pm to 2:30pm\n");
	if(flag2 == 0)
		printf("2--> 2:30pm to 3pm\n");
	if(flag3 == 0)
		printf("3--> 3pm to 3:30pm\n");
	if(flag4 == 0)
		printf("4--> 4pm to 4:30pm\n");
	if(flag5 == 0)
		printf("5--> 4:30pm to 5pm\n");
	if(flag1 == 1 && flag2 == 1 && flag3 == 1 && flag4 == 1 && flag5 == 1)
		printf("\t\t\t\t*********************************************\n"
				"\t\t\t\tSORRY! There is No Reservations for Today\n"
				"\t\t\t\t********************************************\n");


}

EntryType ListHead(List* pl)
{
	return pl->Head->data;
}



void print_star(void)
{
	for(int i=0;i<6;i++)
		printf("\t\t\t\t\t ***********\n");
	for (int i=6;i > 0; i--)
	{
		printf("   \t\t\t\t\t");
		for (int j=6+1-i;j>0; j--)
		{
			printf(" ");
		}

		for (int j=2*i-1;j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	system("cls");
	for(int i=0;i<6;i++)
		printf("\t\t\t\t\t ***********\n");
	for (int i=6;i > 0; i--)
	{
		printf("   \t\t\t\t\t");
		for (int j=6+1-i;j>0; j--)
		{
			printf(" ");
		}

		for (int j=2*i-1;j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}

int Find_Reservation(int x,List* pl)
{
	int found = 0;
	for(int i=0;i<5;i++)
	{
		if(x == pl->reservations[i])
			found = 1;
	}

	return found;
}

void Cancel_Reservation(int id,List* pl)
{
	int i;
	Node* pn;
	pn = pl->Head;
	for(int i =0;i<pl->size;i++)
	{
		if(pn->data.id == id)
		{
			break;
		}
		pn = pn->next;
	}

	if(pn->data.reservation != 0)
	{
		int choose;
		printf("Do You Want To Cancel Reservation For Patient Name: %s\t With ID: %d\n",pn->data.name,pn->data.id);
		printf("1-Yes\n"
				"2-No\n"
				"Your Choose: ");
		scanf("%d",&choose);
		while(choose > 2 || choose < 0)
		{
			print_star();
			printf("Do You Want To Cancel Reservation For Patient Name: %s\t With ID: %d\n",pn->data.name,pn->data.id);
			printf("1-Yes\n"
					"2-No\n"
					"Your Choose: ");
			scanf("%d",&choose);
		}
		if(choose == 1)
		{
			for(i=0;i<5;i++)
			{
				if(pl->reservations[i] == pn->data.reservation)
					break;
			}
			pl->reservations[i] = 0;
			pn->data.reservation = 0;
			pl->n--;
			print_star();
			printf("\t\t\t\t***************************\n"
					"\t\t\t\tReservation Is Canceled!"
					"\t\t\t\t**************************\n");
		}
		else if(choose == 2)
		{
			print_star();
			printf("\t\t\t\t***************************\n"
					"\t\t\t\tReservation Is NOT Canceled!\n"
					"\t\t\t\t**************************\n");
		}
	}
	else
		printf("\t\t\t\t****************************************\n"
				"\t\t\t\tThis Patient Has No Reservation yet!\n"
				"\t\t\t\t****************************************\n");
}

view_reservations(List* pl)
{
	Node* pn;
	pn = pl->Head;
	if(pl->n > 0)
	{
		printf("---------------------------------------------------------------------------------\n");
		for(int i =0;i<pl->size;i++)
		{
			if(pn->data.reservation == 1)
				printf("Patient Name: %s\tPatient ID: %d\t\tReservation Time: 2pm to 2:30pm\n",pn->data.name,pn->data.id);
			if(pn->data.reservation == 2)
				printf("Patient Name: %s\tPatient ID: %d\t\tReservation Time: 2:30pm to 3pm\n",pn->data.name,pn->data.id);
			if(pn->data.reservation == 3)
				printf("Patient Name: %s\tPatient ID: %d\t\tReservation Time: 3pm to 3:30pm\n",pn->data.name,pn->data.id);
			if(pn->data.reservation == 4)
				printf("Patient Name: %s\tPatient ID: %d\t\tReservation Time: 4pm to 4:30pm\n",pn->data.name,pn->data.id);
			if(pn->data.reservation == 5)
				printf("Patient Name: %s\tPatient ID: %d\t\tReservation Time: 4:30pm to 5pm\n",pn->data.name,pn->data.id);
			pn = pn->next;
		}
		printf("---------------------------------------------------------------------------------\n");
	}
	else
		printf("\t\t\t\t************************************\n"
				"\t\t\t\tThere is No Reservations For Today\n"
				"\t\t\t\t***********************************\n");
}
