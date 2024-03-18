/*Write function to check whether given year is leap or not. Write another function to print
number of days in given month.*/

#include<stdio.h>

int no_prime_or_not(int);
void prime_no_bet(int ,int);

int main()
{
    int num ,min,max;
	printf("Enter three number :");
	scanf("%d%d%d",&num,&min,&max);

   int ret =no_prime_or_not(num);
   if(ret==2)
   {
      printf("%d is a prime number\n",num);
   }
   else
   {
      printf("%d is not prime number\n",num);
   }

	prime_no_bet(min,max);

	return 0;

}

int no_prime_or_not(int num)
{
    int i=1,count=0;
	for(i;i<=num;++i)
	{
	   if(num%i==0)
	   {
	       count ++;
		}
	}
	return count;
}
void prime_no_bet(int min,int max)
{
     int i,ret;
	 for(i=min;i<=max;++i)
	 {
	    ret=no_prime_or_not(i);
		if(ret==2)
		    printf("%d\n",i);
     }
}
	  
    
