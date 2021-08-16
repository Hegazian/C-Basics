/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/*
	Write a program in C to read 10 numbers
	from the user and find their summation and average
*/

#include<stdio.h>

void main()
{
	printf("\nEnter The 10 numbers : ");
	int i ;
	int x =0;
 	int sum=0 ;
	int avg= 0;

	for(i=0;i<10;i++)
	{
		printf("\n");
		scanf("%d",&x);
		printf("\nNumber-%d :%d",i,x);		
 		sum +=x;
	}
	printf("\nThe sum of 10 Numbers is : %d",sum);
	avg = sum /10 ;
	printf("\nThe Average is : %d\n",avg);
}
