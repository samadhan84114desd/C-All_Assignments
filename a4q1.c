//Swap two number using pointer

#include<stdio.h>

void swap(int *num1,int *num2);

int main()
{
   int num1,num2;
   printf("enter two number :");
   scanf("%d %d",&num1,&num2);
   printf("Before swap num1=%d and num2=%d\n",num1,num2);
   swap(&num1,&num2);
   printf("After swap num1=%d and num2=%d\n",num1,num2);
   return 0;
}
void swap(int *num1,int *num2)
{
  int temp;
  temp=*num1;
  *num1=*num2;
  *num2=temp;
}

