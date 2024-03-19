/*Write functions to allocate memory for 2 dimensional matrix. Write another function to free the
memory allocated for 2 dimensional matrix.*/

#include<stdio.h>
#include<stdlib.h>

void get_array(int (*ptr)[3]);
void display_arr(int(*ptr)[3]);
int main()
{
   int (*ptr)[3]=(int(*)[3])malloc(9*sizeof(int));
   get_array(ptr);
   display_arr(ptr);
   return 0;
}

void get_array(int (*ptr)[3])
{
   int i,j;
   for(i=0;i<3;++i)
   {
     for(j=0;j<3;++j)
	 {
	    scanf("%d",&ptr[i][j]);
	 }
   }
}
void display_arr(int (*ptr)[3])
{
    int i,j;
	for(i=0;i<3;++i)
	{
	   for(j=0;j<3;++j)
	   {
	      printf("%d\t",ptr[i][j]);
	   }
	   printf("\n");
	}
}
  










