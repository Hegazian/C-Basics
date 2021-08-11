#include<stdio.h>

void main(void){
	int a,b ;
	
	printf("Enter number a :");
	scanf("%d",&a);
	printf("\nEnter number b :");
	scanf("%d",&b);
	
	printf("\n a + b = %d",a+b);
	printf("\n a - b = %d",a-b);
	printf("\n a & b = %d",a&b);
	printf("\n a | b = %d",a|b);
	printf("\n a ^ b = %d",a^b);
}