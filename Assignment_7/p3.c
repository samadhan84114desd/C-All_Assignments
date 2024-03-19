/*Write a function to calculate the sum of elements in the given row. Write another function to
calculate the sum of elements in the given column.*/

#include<stdio.h>
void get_arr(int arr[4][4]);
void display_arr(int arr[4][4]);
void rowadd(int arr[4][4]);
void coladd(int arr[4][4]);
int main()
{
   int arr[4][4];
   printf("Enter a array:");
   get_arr(arr);
   printf("Display matrix:\n");
   display_arr(arr);
   printf("Summetion:\n");
   rowadd(arr);
   printf("-----------------\n");
   coladd(arr);
   return 0;
}
void get_arr(int arr[4][4])
{
   int i,j;
   for(i=0;i<4;++i)
   {
     for(j=0;j<4;++j)
	 {
	    scanf("%d",&arr[i][j]);
     }
	
   }
  
}
void display_arr(int arr[4][4])
{
  int i,j;
  for(i=0;i<4;++i)
  {
     for(j=0;j<4;++j)
	 {
	    printf("%d\t",arr[i][j]);
	 }
	 printf("\n");
  }
}
void rowadd(int arr[4][4])
{
  int i,j,sum=0;
  for(i=0;i<4;++i)
  {
    for(j=0;j<4;++j)
	{
	   sum+=arr[i][j];
	}
	printf("sum of row %d is %d\n",i+1,sum);
	sum =0;
  }
}
void coladd(int arr[4][4])
{
   int i,j,sum=0;
   for(j=0;j<4;++j)
   {
     for(i=0;i<4;++i)
	 {
	     sum+=arr[i][j];
	 }
	 printf("sum of coloum %d is %d\n",j,sum);
	 sum=0;
	}
}







