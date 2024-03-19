//strcat()

#include<stdio.h>
#include<string.h>

int main()
{
     char str1[20];
	 char str2[20];

	 printf("enter a string:");
	 scanf("%s",str1);
	 printf("enter sec string");
	 scanf("%s",str2);

	 strcat(str1,str2);
	 printf("str1=%s and str2=%s \n",str1,str2);
	 return 0;

}
