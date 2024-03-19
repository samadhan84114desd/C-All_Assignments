//strchr()

#include<stdio.h>
#include<string.h>

int main()
{
   char str[40];
   char ch;
   char* ptr;
   printf("Enter a string:");
   scanf("%s",&str);
    
   printf("Enter a character::\n");
   scanf("%s", &ch);
   printf("str=%s and adrr[%u]\n",str,str);

   ptr=strchr(str,ch);
   if(ptr==NULL)
       printf("%c is not found in the string\n",ch);
   else{
       printf("%c is found in the string at memory location %u\n",ch,ptr);
	   }
}
