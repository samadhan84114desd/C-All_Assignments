#include<stdio.h>
#include<string.h>

unsigned long int *my_str(char* str1,char ch);

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
//   char* ptr;
   ptr=strchr(str,ch);
   if(ptr==NULL)
       printf("%c is not found in the string\n",ch);
   else{
       printf("%c is found in the string at memory location %u\n",ch,*ptr);
	   }
   puts("______________________________________________");
   int *cptr;
   cptr=my_str(str,ch);
   if(cptr==NULL)
       printf("%c is not found in this string:\n",ch);
   else
       printf("%c is found in this string at location %u:\n",ch,cptr);
   return 0;
}
unsigned long int  my_str(char*str;char ch)
{
    int i;
	for(i=0;str[i]!='\0';++i)
	{
	   if(str[i]==ch)
	      return &str[i];
	}
	return NULL;
}
