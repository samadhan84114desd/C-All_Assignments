/*Declare a structure to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same*/

#include<stdio.h>

struct student{
            int roll;
			char name[20];
			float marks;
			};
int main()
{
   struct student s1;
   printf("Enter student info:");
   scanf("%d %s %f",&s1.roll,s1.name,&s1.marks);
   printf("Display student info\n");
   printf("roll_number=%d\nName=%s\nmarks=%f\n",s1.roll,s1.name,s1.marks);
   return 0;
 }
