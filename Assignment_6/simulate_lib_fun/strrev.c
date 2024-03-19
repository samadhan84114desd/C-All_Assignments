#include<stdio.h>
#include<string.h>
char *strrev(char *str);
int main()
{
    char str[10];
	printf("Enter a string:");
	scanf("%s",str);
	printf("String before reverse=%s\n",str);

	strrev(str);
	printf("String before reverse=%s\n",str);
	return 0;
}

char *strrev(char *str)
{
   int i,j;
   for(i=0;str[i]!='\0';++i);
   i--;
   for(j=0;j<i;++j,--i)
   {
      char temp=str[j];
	  str[j]=str[i];
	  str[i]=temp;
   }
   return str;
}
