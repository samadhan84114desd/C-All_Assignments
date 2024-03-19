//factorial of given number by using function

#include<stdio.h>

int factorial(int);

int main()
{
    int num;
	printf("Enter a number :");
	scanf("%d",&num);
	int result=factorial(num);
	printf("Factorial of %d is %d",num,result);
	return 0;
}
int factorial(int num)
{
    int fact=1,i=1;
	for(i;i<=num;++i)
	{
	   fact=fact*i;
	}
	return fact;
}
	    
