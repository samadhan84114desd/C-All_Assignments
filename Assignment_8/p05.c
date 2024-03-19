/*Write a function to sort array of student’s information by roll number. Write another function to
sort student’s information by name.*/

#include<stdio.h>
#include<stdlib.h>

struct student{
             int roll_no;
			 char name[30];
			 float marks;
			 };
void sort_by_roll(struct student std[],int n);


int main()
{
     struct student std[]={
	            {12,"yudistir",67},
				{103,"bhim",87},
				{14,"arjun",78},
				{1,"nakul",68},
				{16,"sahadev",74}
                                 };
    
	sort_by_roll(std,5);
    for(int i=0;i<5;++i)
	   printf("roll no=%d,name=%s,mark=%.2f\n",std[i].roll_no,std[i].name,std[i].marks);
	return 0;
}

void sort_by_roll(struct student std[],int n)
{
   int j,i;
   for(i=0;i<n-1;++i)
   {
      for(j=0;j<n-1;++j)
	  {
	     if(std[j].roll_no>std[j+1].roll_no)
		 {
		     int temp=std[j].roll_no;
			 std[j].roll_no=std[j+1].roll_no;
			 std[j+1].roll_no=temp;
		 }
	  }
   }
}






















