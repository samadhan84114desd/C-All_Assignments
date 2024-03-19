//strlen

#include<stdio.h>
#include<string.h>

int main()
{
   char str[20];
   printf("Enter a string :");
   scanf("%s",str);
   int len=strlen(str);
   printf("Length of string is %d\n",len);
   return 0;
}
