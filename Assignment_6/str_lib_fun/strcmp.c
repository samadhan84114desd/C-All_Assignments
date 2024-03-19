//strcmp()

#include<stdio.h>
#include<string.h>

int main()
{
     char str1[20],str2[20];
	 printf("enter a string:");
	 scanf("%s",str1);
	 printf("Enter a second string:");
	 scanf("%s",str2);
	 int ret=strcmp(str1,str2);
	 if(ret==0)
	    printf(" str1 and str2 is same:\n");
	 else if(ret<0)
	    printf("str1 is less than str2:\n");
	 else
	    printf("Str1 is greater than str2:\n");
	 return 0;
}
