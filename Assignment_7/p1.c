/*Write a function to accept a 2-D array from the user. Write another function to print the 2-D
array. Re-use these functions in rest of the assignments wherever required.*/

#include<stdio.h>
void display_arr(int arr[4][4]);

int main()
{
   int arr[4][4];
   printf("Enter a 2D array:");
   int i,j;
   for(i=0;i<4;++i)
   {
     for(j=0;j<4;++j)
	 {
	    scanf("%d",&arr[i][j]);
     }
   }
   display_arr(arr);
   return 0;
}
void display_arr(int arr[4][4])
{
  int i,j;
  for(i=0;i<4;++i)
  {
     for(j=0;j<4;++j)
	 {
	    printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
	 }
	 printf("-------------------\n");
  }
}










