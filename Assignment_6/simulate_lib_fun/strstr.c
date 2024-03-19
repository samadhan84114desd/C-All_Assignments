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
	puts("---------------------------------------------");
	char *cptr;
	cptr=


	return 0;

}
char *my_str(char* str1,char* sstr2)
{
    size_t s2len=strlen(str2);
	int i;
	for(i=0;str1[i]!='\0';++i)
	{
	   if(str1[i]==str2[0])
	   {
	      if(!strcmp(str1+1,str2,s2len))
		  {
		      return str2 + i;
		  }
	   }
	}
	return NULL;
}
   
