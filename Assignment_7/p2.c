//Write functions to calculate addition, subtraction, multiply two matrices of 3x3.


#include<stdio.h>
void display_arr(int arr[3][3]);
void get_arr(int arr[3][3]);
void addition(int sum[3][3],int A[3][3],int B[3][3]);
void substraction(int sub[3][3],int A[3][3],int B[3][3]);
int main()
{

   int A[3][3];
   int B[3][3];
   int sum[3][3];
   int sub[3][3];
   int mul[3][3];
   printf("Enter matrix A:\n");
   get_arr(A);
   printf("Display matrix A:\n");
   display_arr(A);
   printf("Enter matrix B:\n");
   get_arr(B);
   printf("Display matrix B:\n");
   display_arr(B);
   printf("Addition of matrix A and B:\n");
   addition( sum,A, B);
   display_arr(sum);
   printf("Substractio of matrix A and B:\n");
   substraction(sub,A,B);
   display_arr(sub);
   return 0;
}
void get_arr(int arr[3][3])
{
   int i,j;
   for(i=0;i<3;++i)
   {
     for(j=0;j<3;++j)
	 {
	    scanf("%d",&arr[i][j]);
     }
   }
}
void display_arr(int arr[3][3])
{
  int i,j;
  for(i=0;i<3;++i)
  {
     for(j=0;j<3;++j)
	 {
	    printf("%d\t",arr[i][j]);
	 }
	 printf("\n");
  }
}
void addition(int sum[3][3],int A[3][3],int B[3][3])
{
   int i,j;
   for(i=0;i<3;++i)
   {
     for(j=0;j<3;++j)
	 {
	    sum[i][j]=A[i][j]+B[i][j];
	 }
   }
}
void substraction(int sub[3][3],int A[3][3],int B[3][3])
 {
     int i,j;
     for(i=0;i<3;++i)
     {
       for(j=0;j<3;++j)
       {
          sub[i][j]=A[i][j]-B[i][j];
       }
     }
 }










