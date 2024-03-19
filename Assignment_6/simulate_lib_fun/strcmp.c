#include<stdio.h>
#include<string.h>

int main()
{
     char str1[20],str2[20];
	 printf("Enter a first string:");
	 scanf("%s",str1);
	 printf("Enter a sec string:");
	 scanf("%s",str2);
	 int ret=strcmp(str1,str2);
	 if(ret==0)
	     printf("Str1 is equal to str2\n");
     else if(ret<0)
	     printf("str1 is less than str2\n");
	 else
	     printf("str1 is greater than str 2\n");
     puts("-------------------------------------------");
	 int result =my_cmp(str1,str2);
	 if(result==0)
	    printf("same\n");
	 else if(result<0)
	    printf("less\n");
	 else 
	    printf("Greater\n");

	 return 0;
}
int my_cmp( char*str1,char*str2)
{
   int i;
   for(i=0;str1[i]!='\0';++i)
   {
     if(str1[i]!=str2[i])
	 {
	    return str1[i]-str2[i];
	 }
   }
   return str2[i]-str2[i];

}
