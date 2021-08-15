/*	Write C code that manage a small school. The school has 3 classes each class
	contains 10 students. Define three arrays for the three classes each one with a
	length of 10. Save a random numbers in all array elements to indicate the
	students grade. The program will calculate and display the following statistics:
	1- Number of passed students
	2- Number of Failed students
	3- Highest grade
	4- Lowest grade
	5- Average grade
	Knowing that the total grade is from 100 and the minimum passing grade is 50.
*/

#include<stdio.h>

void main(void)
{

	int class_1[10];
	int class_2[10];
	int class_3[10];
	int pass =0;
	int failed=0;
	int temp;
	int total_grade=0;

	//initializing class_1 array using for loop by user
	printf("Please Enter class_1 Students Grades :\n");
	for(int i =0; i<10;i++)
	{
		printf("Please Enter Student Number %d Grade :",i);
		scanf("%d",&class_1[i]);
		total_grade = total_grade + class_1[i];
		if(class_1[i]>=50)
		{
			pass++;
		}
		else
		{
			failed++;
		}	
	}
	//arange students grades
	for(int j =0; j<10;j++)
	{
		for(int k =0;k<10;k++)
		{
			if(class_1[j]>class_1[k])
			{
				temp = class_1[j];
				class_1[j] = class_1[k];
				class_1[k] = temp;
			}
		}
	}
	printf("\n*************************************\n");
	printf("The Highest Grade in class_1 is %d\n",class_1[0]);
	printf("The Lowest Grade in class_1 is %d\n",class_1[9]);
	printf("The Number of Passed Students in class_1 is %d\n",pass);
	printf("The Number of Failed Students in class_1 is %d\n",failed);
	printf("The Average of Grades in class_1 is %d\n",total_grade/10);
	printf("\n*************************************\n");

	//second class	
	pass =0;
	failed=0;
	total_grade=0;
	printf("Please Enter class_2 Students Grades :\n");
	for(int i =0; i<10;i++)
	{
		printf("Please Enter Student Number %d Grade :",i);
		scanf("%d",&class_2[i]);
		total_grade = total_grade + class_2[i];
		if(class_2[i]>=50)
		{
			pass++;
		}
		else
		{
			failed++;
		}	
	}

	//arange students grades
	for(int j =0; j<10;j++)
	{
		for(int k =0;k<10;k++)
		{
			if(class_2[j]>class_2[k])
			{
				temp = class_2[j];
				class_2[j] = class_2[k];
				class_2[k] = temp;
			}
		}
	}
	printf("\n*************************************\n");
	printf("The Highest Grade in class_2 is %d\n",class_2[0]);
	printf("The Lowest Grade in class_2 is %d\n",class_2[9]);
	printf("The Number of Passed Students in class_1 is %d\n",pass);
	printf("The Number of Failed Students in class_1 is %d\n",failed);
	printf("The Average of Grades in class_2 is %d\n",total_grade/10);
	printf("\n*************************************\n");


	//third class
	pass =0;
	failed=0;
	total_grade=0;
	printf("Please Enter class_3 Students Grades :\n");
	for(int i =0; i<10;i++)
	{
		printf("Please Enter Student Number %d Grade :",i);
		scanf("%d",&class_3[i]);
		total_grade = total_grade + class_3[i];
		if(class_3[i]>=50)
		{
			pass++;
		}
		else
		{
			failed++;
		}	
	}

	//arange students grades
	for(int j =0; j<10;j++)
	{
		for(int k =0;k<10;k++)
		{
			if(class_3[j]>class_3[k])
			{
				temp = class_3[j];
				class_3[j] = class_3[k];
				class_3[k] = temp;
			}
		}
	}
	printf("\n*************************************\n");
	printf("The Highest Grade in class_3 is %d\n",class_3[0]);
	printf("The Lowest Grade in class_3 is %d\n",class_3[9]);
	printf("The Number of Passed Students in class_1 is %d\n",pass);
	printf("The Number of Failed Students in class_1 is %d\n",failed);
	printf("The Average of Grades in class_1 is %d\n",total_grade/10);
	printf("\n*************************************\n");

}
