/*
 * patient_list.h
 *
 *  Created on: Nov 24, 2021
 *      Author: aaa
 */

#ifndef PATIENT_LIST_H_
#define PATIENT_LIST_H_

typedef struct patient
{
	char name[20];
	int age;
	int gender;
	int id;
	int reservation;

}patient;

/*typedef struct Doctor
{
	//patient p[10];
	char reservations[5][30] = {{"1--> 2pm to 2:30pm"},
								{"2--> 2:30pm to 3pm"},
								{"3--> 3pm to 3:30pm"},
								{"4--> 4pm to 4:30pm"},
								{"5--> 4:30pm to 5pm"}};
}Doctor;
*/
typedef patient EntryType;

typedef struct Node
{
	EntryType data;
	struct Node* next;
	int pos;
}Node;

typedef struct List
{
	Node* Head;
	int size;
	int reservations[5];
	int n;
}List;


void CreateList(List* pl);

void Insert(EntryType e,int p,List* pl);

void Delete(EntryType* pe,int p,List* pl);

EntryType ListHead(List* pl);

int IsListEmpty(List* pl);

int IsListFull(List* pl);

int ListSize(List* pl);

void ClearList(List* pl);

void RetrieveElement(EntryType* pe,int p,List* pl);

int FindId(int id,List* pl);

void Print_Patient(int id,List* pl);

void Edit_Patient(int id,List* pl);

void Reserve_Slot(int id,List* pl);

void Cancel_Reservation(int id,List* pl);

void ReplaceElement(EntryType e,int p,List* pl);

void TraverseList(List* pl,void (*pf)(EntryType));

void Print_Reservations(List* pl);

void print_star(void);

int Find_Reservation(int x,List* pl);

view_reservations(List* pl);

#endif /* PATIENT_LIST_H_ */
