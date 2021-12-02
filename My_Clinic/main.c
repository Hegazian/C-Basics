/*
 * main.c
 *
 *  Created on: Nov 24, 2021
 *      Author: aaa
 */


#include<stdio.h>
#include"patient_list.h"


void PrintList(patient e)
{
	printf("------------------------\n");
	printf("Name: %s\n",e.name);
	printf("Age: %d\n",e.age);
	printf("Gender: %s\n",e.gender);
	printf("ID: %d\n",e.id);
	printf("------------------------\n");
}

void main(void)
{

	int h =54;
	int i,j;
	for (i=h;i > 0; i--)
	{
		for (j=h-1-i;j>0; j--)
		{
			printf(" ");
		}

		for (j=2*i+1;j>0; j--)
		{
			printf("-");
		}

		printf("\n");
	}

	printf("\t\t\t\t\t--------------------------\n");
	printf("\t\t\t\t\t|Clinic System Management|\n");
	printf("\t\t\t\t\t--------------------------\n");

	int id;

	List l;
	CreateList(&l);
	patient p;
	int mode;
	int flage0 = 0;
	while(flage0 == 0)
	{
		printf("\n\t\t\t\t\t 1- For Admin Mode\n"
				"\t\t\t\t\t 2- For User Mode\n"
				"\t\t\t\t\t 3- For Exiting \n"
				"\n\t\t\t\t\t--------------------------\n"
				"\t\t\t\t\tPlease Choose Your Mode: ");
		scanf("%d",&mode);
		if(mode == 1)
		{
			int i =0;
			int r =0;
			int pw;
			print_star();
			printf("\n\t\t\t\t****************************\n"
					"\t\t\t\tYou Are In Admin Mode\n"
					"\t\t\t\t*****************************\n"
					"\t\t\t\tPlease Enter The Password: ");
			while(i<3 && r == 0)
			{
				scanf("%d",&pw);
				if(pw == 1234)
				{
					print_star();
					printf("\t\t\t\t**************************\n"
							"\t\t\t\tLoged In Sucssefully!\n"
							"\t\t\t\t*************************\n");
					int flage = 0;
					while(flage == 0)
					{
						int OperationNumber;
						printf("\t\t\t\tPlease Choose Your Operation:\n\n"
								"\t\t\t\t1. Add new patient record\n"
								"\t\t\t\t2. Edit patient record\n"
								"\t\t\t\t3. Reserve a slot with the doctor\n"
								"\t\t\t\t4. Cancel reservation.\n"
								"\t\t\t\t5. Exit Admin Mode\n");
						printf("\t\t\t\tOperation Number: ");
						scanf("%d",&OperationNumber);
						switch(OperationNumber)
						{
							case 1:
								//printf("\t\t\t\tYou Choose To Add Patient\n");
								print_star();
								Insert(p,0,&l);
								break;
							case 2:
								print_star();
								printf("\t\t\t\t*********************************\n"
										"\t\t\t\tYou Choose To Edit a Patient\n"
										"\t\t\t\t*********************************\n");
								if(IsListEmpty(&l))
									printf("\t\t\t\t**************************************************************\n"
											"\t\t\t\tThere is No Patients in Your List! Please Add Patient First...\n"
											"\t\t\t\t*************************************************************\n");								else
								{
									printf("\t\t\t\tPatient ID: ");
									scanf("%d",&id);
									while(!FindId(id,&l))
									{
										printf("\t\t\t\tID is NOT Exist! Try Another ID\n");
										printf("\t\t\t\tpatient ID: ");
										scanf("%d",&id);
									}
									Edit_Patient(id,&l);
								}
								break;
							case 3:
								print_star();
								printf("\t\t\t\t********************************************\n"
										"\t\t\t\tYou Choose To Reserve a Slot with doctor\n"
										"\t\t\t\t********************************************\n");
								if(IsListEmpty(&l))
									printf("\t\t\t\t**************************************************************\n"
											"\t\t\t\tThere is No Patients in Your List! Please Add Patient First...\n"
											"\t\t\t\t*************************************************************\n");
								else
								{
									printf("\t\t\t\tPatient ID: ");
									scanf("%d",&id);
									while(!FindId(id,&l))
									{
										printf("\t\t\t\tID is NOT Exist! Try Another ID\n");
										printf("\t\t\t\tpatient ID: ");
										scanf("%d",&id);
									}
									Reserve_Slot(id,&l);
								}
								break;
							case 4:
								print_star();
								printf("\t\t\t\t**************************************\n"
										"\t\t\t\tYou Choose To Cancel a Reservation\n"
										"\t\t\t\t**************************************\n");
								if(IsListEmpty(&l))
									printf("\t\t\t\t**************************************************************\n"
											"\t\t\t\tThere is No Patients in Your List! Please Add Patient First...\n"
											"\t\t\t\t*************************************************************\n");
								else
								{
									printf("\t\t\t\tPatient ID: ");
									scanf("%d",&id);
									while(!FindId(id,&l))
									{
										printf("\t\t\t\tID is NOT Exist! Try Another ID\n");
										printf("\t\t\t\tpatient ID: ");
										scanf("%d",&id);
									}
								}
								Cancel_Reservation(id,&l);
								break;
							case 5:
								print_star();
								printf("\t\t\t\t\t********************\n"
										"\t\t\t\t\tYou Exit Admin Mode\n"
										"\t\t\t\t\t********************\n");
								flage=1;r=1;
								break;
							default:
								print_star();
								printf("\t\t\t\tInCorrect Operation Number!\n");break;
						}
					}
				}
				else
				{
					print_star();
					printf("\n\t\t\t\tIncorrect Password ! Try Again: ");
					i++;
				}

			}
				if(i>=3)
				{
					print_star();
					printf("\n\t\t\t\tIncorrect Password For 3 Times\n"
							"\t\t\t\tYOU LOGED OUT\n");
				}
		}

		else if(mode == 2)
		{
			print_star();
			int opreation;
			printf("\t\t\t\t****************************\n"
					"\n\t\t\t\tYou Are In User Mode\n"
					"\t\t\t\t****************************\n");
			printf("\t\t\t\t1.View Patient Record\n"
					"\t\t\t\t2.View Today's Reservation\n");
			printf("\t\t\t\tPlease Enter Your Choose: ");
			scanf("%d",&opreation);
			switch(opreation)
			{
				case 1:
					print_star();
					printf("\t\t\t\t*****************************************\n"
							"\t\t\t\tYou Choose To View a Patient Record\n"
							"\t\t\t\t*****************************************\n");
					if(IsListEmpty(&l))
						printf("\t\t\t\t**************************************************************\n"
								"\t\t\t\tThere is No Patients in Your List! Please Add Patient First...\n"
								"\t\t\t\t*************************************************************\n\n");
					else
					{
						printf("\t\t\t\tPatient ID: ");
						scanf("%d",&id);
						while(!FindId(id,&l))
						{
							print_star();
							printf("\t\t\t\t**********************************\n"
									"\t\t\t\tID is NOT Exist! Try Another ID\n"
									"\t\t\t\t*********************************\n");
							printf("\t\t\t\tpatient ID: ");
							scanf("%d",&id);
						}
						Print_Patient(id,&l);
					}
					break;
				case 2:
					print_star();
					printf("\t\t\t\t*******************************************\n"
							"\t\t\t\tYou Choose To View today's reservations:\n"
							"\t\t\t\t******************************************\n");
					view_reservations(&l);
					break;
				default:
					print_star();
					printf("\t\t\t\t******************************************\n"
							"\t\t\t\tPlease Choose Correct Operation Number\n"
							"\t\t\t\t*****************************************\n");break;
			}

		}

		else if(mode == 3)
		{
			break;
		}

		else
		{
			print_star();
			printf("\t\t\t\t************************************\n"
					"\t\t\t\tPlease Enter Correct Mode Number\n "
					"\t\t\t\t***********************************\n");
		}
	}


}


