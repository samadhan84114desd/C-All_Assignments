#include<stdio.h>
#include<string.h>

char*My_strlen(char*str);

int main()
{
   char str[20]="krishna";
   printf("Your string=%s\n",str);

   int len=strlen(str);
   printf("this is your string length %d\n",len);

   size_t flen=My_strlen(str);
   printf("This is your string length by using function %d\n",flen);
   return 0;
 }
 
 char *My_strlen(char *str)
 {
     size_t i;
	 int len=0;
	 for(i=0;str[i]!=0;++i)
	 {
	    len++;
	 }
     return len;
 }

















