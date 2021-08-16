/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

/*	Write a code that will ask the user to enter 3
	numbers, the program will print the maximum
	number of them.
*/

#include<stdio.h>

void main(void){
	int x,y,z,maxnumber;
	printf("Please Enter 3 number \n");
	printf("Enter Number 1 : ");
	scanf("%d",&x);
	printf("Enter Number 2 : ");
	scanf("%d",&y);
	printf("Enter Number 3 : ");
	scanf("%d",&z);
	
	if(x > y){
		maxnumber = x;
		if(z > x){
			maxnumber = z;
		}
	}
	if(y > x){
		maxnumber = y;
		if(z > y){
			maxnumber = z ;
		}
	}
	printf("Max number is : %d\n",maxnumber);
}
		
	
