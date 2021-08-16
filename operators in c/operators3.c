/*	This C file is Written by Abdelrahman Hegazy email:abdelrahmanhegazy70@gmail.com gitgub:https://github.com/Hegazian	*/

// Assigned Operators : they are operators used for assign number or operation to variables
   
/* there are many types of Assigned Operators 

	1-Assign x = 20 ( assign 20 to x ) 
	2-Add and Assign x+=3 ( Add 3 to x and assign the value to x )
	3-subtract and assign x-=4 ( subtract 4 from x and assign the value to x )
	4-multiply and assign x*= 2 (multiply x by 2 and assign thr value to x )
	5-Divide and assign x/= 2 (divide x by 2 and assign the value to x )
	6-Modulus and assin x%=4 (get the reminder of x divided by 4 and assign the value to x)
	7-And then assign x&=1 (apply and operation between x and 1 and assign the value to x)
	8-OR then Assign x|=1 (apply OR operation between x and 1 and assign the value to x)
	9-XOR then assign x^=1 (apply XOR operation between x and 1 and assign the value to x)
	10-Shift Right then assign x>>= 1 (apply Right shift operation to x by 1 and assign the value to x)
	11-Shift left then assign x<<=1 (apply left shift operation to x by 1 and assign the value to x)

*/


#include<stdio.h>


void main(void)
{
	//make variables that will hold the input
	int x = 0;

	printf("please Enter number1: ");
	scanf("%d",&x);

	printf("\n x = %d",x);
	printf("\n x+=3 >>>>>> %d",x+=3);
	printf("\n x-=4 >>>>>> %d",x-=4);
	printf("\n x*=2 >>>>>> %d",x*=2);
	printf("\n x/=2 >>>>>> %d",x/=2);
	printf("\n xMOD=4 >>>>>> %d\n",x%=4);
	printf("\n x&=1 >>>>>> %d",x&=1);
	printf("\n x|=1 >>>>>> %d",x|=1);
	printf("\n x^=1 >>>>>> %d\n",x^=1);
	printf("\n x>>=1 >>>>>> %d",x>>=1);
	printf("\n x<<=1 >>>>>> %d\n",x<<=1);

}
