/*Write a function to accept student information from the user. Write another function to print
student’s information. Re-use these functions in rest of the assignments wherever required.*/

#include<stdio.h>

struct student{
            int roll;
			char name[20];
			float marks;
			};

void accept_str(struct student *s1);
void display_str(struct student s1);
int main()
{
   struct student s1;
   printf("Enter student info:");
   accept_str(&s1);
   display_str(s1);
   return 0;
}

void accept_str(struct student* s1)
{
   scanf("%d %s %f",&s1->roll,s1->name,&s1->marks);
}
void display_str(struct student s1)
{
   printf("Display student info\n");
   printf("roll_number=%d\nName=%s\nmarks=%f\n",s1.roll,s1.name,s1.marks);
   
 }
