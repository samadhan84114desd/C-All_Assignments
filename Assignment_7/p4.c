/*Write a function to accept five names of students from the user (use 2D array). Write another
function to print these names. Finally write a function to sort student names.*/

#include<stdio.h>
#include<string.h>
void get_name(char str[5][10]);
void display_name(char str[5][10]);
void sort(char str[5][10]);

int main()
{
   char str[5][10];
   printf("Enter a five name:\n");
   get_name(str);
   printf("five name :\n");
   display_name(str);
   printf("Print name after sort\n");
   sort(str);
   display_name(str);
   return 0;
}
void get_name(char str[5][10])
{
   int i,j;
   for(i=0;i<5;++i)
   {
      
	  
	     scanf("%s",str[i]);
	  
   }
}
void display_name(char str[5][10])
{
  int i,j;
  for(i=0;i<5;++i)
  {
    
	   printf("name%d=%s\n",i+1,str[i]);
	
	
  }
  printf("\n");
}
void sort(char str[5][10])
{
   
   int i,j,temp[10];
   for(i=0;i<5;++i)
   {
     for(j=i+1;j<5;++j)
	 {
	    if(strcmp(str[i],str[j])>0)
		{
		   strcpy(temp,str[i]);
		  strcpy( str[i],str[j]);
		  strcpy( str[j],temp);
        }
	 }
   }
}












