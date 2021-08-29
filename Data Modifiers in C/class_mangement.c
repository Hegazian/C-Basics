/*	Write a C code to manage a class of 10
	students. Each student studies 4 subjects
	Math, Language, Physics and Chemistry.
	First define an array of 10 elements and assign
	random grades for students. The system will
	ask the user to enter the student ID then the
	system will show its grades. The software shall
	manage wrong IDs.
*/

#include<stdio.h>

typedef  int u16;

typedef struct MyStruct
{
	u16 ID;
	u16 Math;
	u16 Language;
	u16 Physics;
	u16 Chemistry;
}Class;

void main(void)
{
	u16 ID;
	Class Students[10] = {{1,50,60,70,40},{2,80,70,90,75},{3,87,78,99,58},{4,55,77,89,88},
				{5,100,99,95,96},{6,88,99,97,79},{7,77,80,100,79},{8,90,80,70,60},
				{9,40,56,54,34},{10,87,79,85,65}};

	printf("Please Enter Student ID : ");
	scanf("%d",&ID);
	if (ID < 10)
	{
		printf("Math Grade: %d\n",Students[ID].Math);
		printf("Language Grade: %d\n",Students[ID].Language);
		printf("Math Grade: %d\n",Students[ID].Physics);
		printf("Math Grade: %d\n",Students[ID].Chemistry);
	}
	
	else
	{
		printf("Student ID is not correct\n");
	}
	
}
