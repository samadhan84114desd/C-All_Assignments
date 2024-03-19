//strncpy()

#include<stdio.h>
#include<string.h>

int main()

{
   char str1[20];
   char str2[20];
   size_t n=3;

   printf("Enter a string:\n");
   scanf("%s",str1);
   strncpy(str2,str1,n);
   printf("str1=%s and str2=%s\n",str1,str2);
   return 0;
}
