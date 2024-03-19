#include<stdio.h>



int add(int ,int);
int main()
{
  int num1,num2;
  printf("Enter two number:");
  scanf("%d%d",&num1,&num2);
  int result=add(num1,num2);
  printf("Result is %d",result);
  return 0;
}

int add(int num1,int num2)
{
   int ret=num1+num2;
   return ret;
}
