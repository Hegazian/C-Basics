/*
	Write a C code that ask the user to enter his ID, if the ID is valid it will
	ask the user to enter his password, if the password is correct the
	program will print the user name, if the password is incorrect the
	program will print Incorrect Password.
	In case of not existing ID, the program will print Incorrect ID
*/

#include<stdio.h>

void main(void){

	int id,p;

	printf("User id : ");
	scanf("%d",&id);
	//printf("\nEnter password : ");
	//scanf("%d",&p);
	if(id == 12345){
		printf("Enter Password : ");
		scanf("%d",&p);
		
		if(p == 98765){
			printf("welcome sir....!\n");
		}
		else{
			printf("incorrect password!");
		}
	}
	else{
		printf("incorrect Id!\n");	
	}
}
 
