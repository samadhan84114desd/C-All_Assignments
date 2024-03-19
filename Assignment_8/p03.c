/*Write a function to accept array of student’s information from the user. Write another function
to print the array student’s information. Re-use these functions in rest of the assignments
wherever required*/

#include<stdio.h>

struct student{
            int roll;
			char name[20];
			float marks;
			};

void accept_str(struct student s1[],int n);
void display_str(struct student s1[],int n);
int main()
{
   int n;
   printf("enter number of student:");
   scanf("%d",&n);
   struct student s1[n];
   accept_str(s1,n);
   display_str(s1,n);
   return 0;
}

void accept_str(struct student s1[],int n)
{
   for(int i=0;i<n;++i)
       {
	   printf("Enter %d student info:<roll_no>,<name>,<marks>",i+1);

	   scanf("%d %s %f",&s1[i].roll,s1[i].name,&s1[i].marks);
		
      }
}
void display_str(struct student s1[],int n)
{
   printf("Display student info\n");
   for(int i=0;i<n;++i)
   {

       printf("roll_number=%d\nName=%s\nmarks=%f\n",s1[i].roll,s1[i].name,s1[i].marks);
	   printf("-------------------------------\n");
   }
 }
