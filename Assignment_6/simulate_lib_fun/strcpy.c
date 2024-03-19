#include<stdio.h>
#include<string.h>

char* my_str(char*str1,char*str2);

int main()
{
    char str1[20];
	char str2[20];
	printf("Enter first string:");
	scanf("%s",str1);
	printf("User entered string:%s\n",str1);
	my_str(str1,str2);
	printf("Srting after using function: %s\n",str2);
	return 0;
}
char *my_str(char *str1,char *str2)
{
    size_t i=0;
	for(i;str1[i]!='\0';++i)
	{
	  str2[i]=str1[i];
	}
	str2[i]='\0';
	return str2;
}
