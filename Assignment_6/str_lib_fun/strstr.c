#include<stdio.h>
#include<string.h>

int main()
{
  char str1[20];
  char str2[20];
	printf("Enter a string 1:");
	scanf("%[^\n]s",str1);
	printf("Enter a str2 :");
	scanf("%s",str2);
	printf("str1=%s and str2=%s\n",str1,str2);
	char *ptr=strstr(str1,str2);
	printf("ptr=%u",ptr);
	printf("ptr=%s\n",ptr);
    return 0;
}
