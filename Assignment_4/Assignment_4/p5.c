// write a function to print charactor given number of time.

#include<stdio.h>

void print(int, char);

int main()
{
   int num;
   char ch;
   printf("Enter a number and charactar:");
   scanf("%d %c",&num,&ch);

   print(num,ch);
   return(0);

 }
 void print(int num,char ch)
 {
    int i;
	for(i=0;i<num;++i)
	{
	   printf("%c\t",ch);
	}
}
