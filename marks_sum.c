#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int marks_summation(int* marks,int number_of_student,char gender)
{
	int sum=0,i,j;
	
	if(gender=='b')
	{
		for(i=0;i<number_of_student;i=i+2)
		{
			sum+=marks[i];
		}
	}
	
	if(gender=='g')
	{
		for(j=0;j<number_of_student;j=j+2)
		{
			sum+=marks[j];
		}
	}
	return sum;
}

int main ()
{
	int sum;
	int number_of_student;
	char gender;
	
	scanf("%d",&number_of_student);
	int *marks = (int*)malloc(number_of_student*sizeof(int));
	
	for(int student=0;student<number_of_student;student++ )
	{
		scanf("%d",(marks+student));
	}
	scanf("%c",&gender);
	 	printf("%d",marks_summation(marks,number_of_student,gender));
	 	free(marks);
	 	
	 	return 0;
}
