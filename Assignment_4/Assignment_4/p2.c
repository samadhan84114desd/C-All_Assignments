//calculate a power of number

#include<stdio.h>

int power(int ,int);

int main()
{
  int base,index;
  printf("Enter power and index :");
  scanf("%d%d",&base,&index);
  int result=power(base,index);
  printf("Power of %d and %d is %d\n",base,index,result);
  return 0;
 }

 int power(int base,int power)
 {
    int i=0,powr=1;
	for(i;i<power;++i)
	{
	    powr=powr*base;

	}
	return powr;
}
