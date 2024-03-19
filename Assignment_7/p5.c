/*Write a function to accept five names of students from the user (use array of character
pointers). Write another function to print these names. Write a function to sort student names.
Finally write a function to free memory allocated for student names.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void get_name(char* ptr[]);
void display_name(char* ptr[]);
void free_ptr(char* ptr[]);
void sort(char* ptr[]);
int main()
{
   int i;
   char** ptr=(char**)malloc(sizeof(char*)*5);


   for( i=0;i<5;++i)
   {
        ptr[i]=(char*)malloc(15);
   }
   get_name(ptr);
   printf("Before sorting\n");
   display_name(ptr);
   sort(ptr);
   printf("After sorting\n");
   display_name(ptr);

   free_ptr(ptr);
   free(ptr);
   return 0;
}
void get_name(char* ptr[])
{
   int i;
   for(i=0;i<5;++i)
   {
     printf("Enter %d name:",i+1);
     scanf("%s",ptr[i]);
    }
}
void display_name(char* ptr[])
{
   int i;
   for( i=0;i<5;++i)
   {
     printf("%s\n",ptr[i]);
   }
}

void sort(char* ptr[]) {
      char temp[100];
      for (int i = 0; i < 5; ++i) {
          for (int j = i + 1; j < 5; ++j) {
              if (strcmp(ptr[i], ptr[j]) > 0) {
                  strcpy(temp, ptr[i]);
                  strcpy(ptr[i], ptr[j]);
                  strcpy(ptr[j], temp);
              }
          }
     }
 }

void free_ptr(char* ptr[])

{
   int i;
   for( i=0;i<5;++i)
   {
     free(ptr[i]);
   }
  
}





