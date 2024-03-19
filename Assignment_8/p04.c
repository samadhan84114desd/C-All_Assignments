/*Write a function to search student’s information by roll number. Write another function to
search student’s information by name*/

#include<stdio.h>
#include<string.h>
typedef struct student{
               int roll_no;
			   char name[20];
			   float marks;
			   }stud;
void search_by_roll(stud std[],int n,int roll_no);
void search_by_name(stud std[],int n,char name[]);

int main()
{
    
       int roll_no;
	   char name[20];
       stud std[]={ 
	            
				{12,"yudistir",67},
				{13,"bhim",87},
				{14,"arjun",78},
				{15,"nakul",68},
				{16,"sahadev",74}
				};
	  printf("Enter a roll number:");
	  scanf("%d",&roll_no);
      search_by_roll(std,5,roll_no);
      printf("Enter name:");
	  scanf("%s",name);

	  search_by_name(std,5,name);
	 
	  return 0;
}

void search_by_roll(stud std[],int n,int roll_no)
{
  int i, flag=0;
  for(i=0;i<n;++i)
  {
     if(std[i].roll_no==roll_no)
	 {
	    printf("Roll number %d is found\n",std[i].roll_no);
		printf("name =%s\n",std[i].name);
		printf("marks=%f\n",std[i].marks);
		flag=1;
		break;
	 }
  }
 
  if(!flag)
    printf("%d roll number is not found\n",roll_no);

}
void search_by_name(stud std[],int n,char name[])
{
    int i,flag=0;
	for(i=0;i<n;++i)
	{
	   if(strcmp(std[i].name,name)==0)
	   {
	      printf("name %s is found \n",std[i].name);
		  printf("roll no =%d\n",std[i].roll_no);
		  printf("marks=%f\n",std[i].marks);
		  flag=1;
		  break;
	   }
	}
	if(!flag)
	   printf("name %s is not found\n",name);
}
	












