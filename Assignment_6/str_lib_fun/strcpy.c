//strcpy()

#include<stdio.h>
#include<string.h>

int main()

{
   char str1[20];
   char str2[20];

   printf("Enter a string:\n");
   scanf("%s",str1);
   strcpy(str2,str1);
   printf("str1=%s and str2=%s\n",str1,str2);
   return 0;
}
