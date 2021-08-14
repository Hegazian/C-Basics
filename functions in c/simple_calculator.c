/*
	Write a C program to act as simple calculator, first it will ask the user to enter the
	operation ID, depending on the operation, the program will ask the user either to
	enter 1 operand or 2 operands and the program will execute the operation and print
	the result. Each operation should be implemented in a stand a long function.



							ID	 Operation 	Number of Operands
							1 	 Add 		 2
							2 	 Subtract	 2
							3 	 Multiply 	 2
							4 	 Divide		 2
							5 	 And 		 2
							6 	 Or 		 2
							7 	 Not 		 1
							8 	 Xor 		 2
							9 	 reminder 	 2
							10 	 Increment 	 1
							11 	 Decrement 	 1
*/



#include<stdio.h>

int Add(int x,int y);
int Subtract(int x,int y);
int Multiply(int x,int y);
int Divide(int x,int y);
int And(int x,int y);
int Or(int x,int y);
int Not(int x);
int Xor(int x,int y);
int Reminder(int x,int y);
int increment(int x);
int decrement(int x);


void main(void)
{
	int id,n1,n2,op;
	printf("Please Enter The ID of operation you want to make : ");
	scanf("%d",&id);
	
	switch(id)
	{
		case 1:
			printf("You choose Add operation\nPlease Enter Your frist Number : ");
			scanf("%d",&n1);
			printf("Please Enter Your second Number : ");
			scanf("%d",&n2);
			op = Add(n1,n2);
			printf("The Result is : %d\n",op);
			break;
		case 2:
			printf("You choose Subtract operation\nPlease Enter Your frist Number : ");
			scanf("%d",&n1);
			printf("Please Enter Your second Number : ");
			scanf("%d",&n2);
			op = Subtract(n1,n2);
			printf("The Result is : %d\n",op);
			break;
		case 3:
			printf("You choose Multiply operation\nPlease Enter Your frist Number : ");
			scanf("%d",&n1);
			printf("Please Enter Your second Number : ");
			scanf("%d",&n2);
			op = Multiply(n1,n2);
			printf("The Result is : %d\n",op);
			break;
		case 4:
			printf("You choose Divide operation\nPlease Enter Your frist Number : ");
			scanf("%d",&n1);
			printf("Please Enter Your second Number : ");
			scanf("%d",&n2);
			op = Divide(n1,n2);
			printf("The Result is : %d\n",op);
			break;
		case 5:
			printf("You choose And operation\nPlease Enter Your frist Number : ");
			scanf("%d",&n1);
			printf("Please Enter Your second Number : ");
			scanf("%d",&n2);
			op = And(n1,n2);
			printf("The Result is : %d\n",op);
			break;
		case 6:
			printf("You choose Or operation\nPlease Enter Your frist Number : ");
			scanf("%d",&n1);
			printf("Please Enter Your second Number : ");
			scanf("%d",&n2);
			op = Or(n1,n2);
			printf("The Result is : %d\n",op);
			break;
		case 7:
			printf("You choose Not operation\nPlease Enter Your Number : ");
			scanf("%d",&n1);
			op = Not(n1);
			printf("The Result is : %d\n",op);
			break;
		case 8:
			printf("You choose Xor operation\nPlease Enter Your frist Number : ");
			scanf("%d",&n1);
			printf("Please Enter Your second Number : ");
			scanf("%d",&n2);
			op = Xor(n1,n2);
			printf("The Result is : %d\n",op);
			break;
		case 9:
			printf("You choose Reminder operation\nPlease Enter Your frist Number : ");
			scanf("%d",&n1);
			printf("Please Enter Your second Number : ");
			scanf("%d",&n2);
			op = Reminder(n1,n2);
			printf("The Result is : %d\n",op);
			break;
		case 10:
			printf("You choose increment operation\nPlease Enter Your Number : ");
			scanf("%d",&n1);
			op = increment(n1);
			printf("The Result is : %d\n",op);
			break;
		case 11:
			printf("You choose decrement operation\nPlease Enter Your Number : ");
			scanf("%d",&n1);
			op = decrement(n1);
			printf("The Result is : %d\n",op);
			break;
		defualt:
			printf("Please Enter correct number for operation form 1 to 11 : \n");
			break;
	}
}

int Add(int x,int y)
{
	return x+y;
}

int Subtract(int x,int y)
{
	return x-y;
}
	
int Multiply(int x,int y)
{
	return x*y;
}

int Divide(int x,int y)
{
	return x/y;
}

int And(int x,int y)
{
	return x&y;
}


int Or(int x,int y)
{
	return x|y;
}

int Not(int x)
{
	return ~x;
}

int Xor(int x,int y)
{
	return x^y;
}

int Reminder(int x,int y)
{
	return x%y;
}

int increment(int x)
{
	return ++x;
}

int decrement(int x)
{
	return --x;
}
