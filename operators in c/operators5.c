// logical Operators : These operators are used to apply logical operation between two values, 			       each value will be considered either false if it is 0.			   			       or true if it is not 0.

// there are many types of logical Operators 

	/*1-Logical AND x = 3 && 0   3 is True and Zero is False 
				     True AND False is False
			 	     then x now equals False(0)

	2-Logical OR x = 3 || 0	     3 is True and Zero is False 
				     True OR False is True
			 	     then x now equals True(1)

	3-Logical NOT x = !5         5 is True  
				     NOT True is False 
			 	     then x now equals False(0)

*/


#include<stdio.h>


void main(void)
{
	int x = 0;	
	
	printf("\n x=3&&0 >>>>> %d",x=3&&0);
	printf("\n x=3||0 >>>>> %d",x=3||0);
	printf("\n x=!5  >>>>>> %d\n",x=!5);
}
