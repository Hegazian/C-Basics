/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/*
	Write a C code to ask the user to enter his
	grade and the program will print his rating.
	0 <= grade < 50   ------> Failed
	50 <= grade < 65  ------> Normal
	65 <= grade < 75  ------> Good
	75 <= grade < 85  ------> Very Good
	85 <= grade       ------> Excellent
*/

#include<stdio.h>

void main()
{

	int grade = 0;
	printf("Please Enter Your Grade: ");
	scanf("%d",&grade);

	if(0<=grade && grade<50)
	{
	    printf("\nYour Rating is Failed\n");
	}
	
	else if(grade>=50 &&grade<65)
	{
	    printf("\nYour Rating is Normal\n");
	}
	else if(grade>=65 &&grade<75)
	{
	    printf("\nYour Rating is Good\n");
	}
	else if(grade>=75 && grade<85)
	{
	    printf("\nYour Rating is Very Good\n");
	}
	else if(grade>=85 && grade<=100)
	{
	    printf("\nYour Rating is Exellent\n");
	}
	else
	{
	    printf("\nEnter a correct Grade Please\n");
	}
}
