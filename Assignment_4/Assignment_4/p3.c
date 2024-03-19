/*Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.*/

#include<stdio.h>

int main()
{
     int num1,num2,result;
	 char op,ch;
     do
	 {
		printf("Enter num1, opr, num2 : ");
		scanf("%d %c %d", &num1, &opr, &num2);
	
		result = calculate(num1, opr, num2);
		
		if(flag == 0)
			printf("%d %c %d = %d\n", num1, opr, num2, result);
		else
			flag = 0;

		printf("Do you want to continue? (y/n) : ");
		scanf("%*c%c", &ch);

	}while(ch != 'n');

}
int calculate(int num1,int num2,char opr)
{
   int result;
   
   switch(opr)
   {
          case '+':
		           result=num1+num2;
				   break;
		 
		  
		  case '-':
		           result=num1-num2;
				   break;

		  case '*':
		          result=num1*num2;
				  break;

         case'/':"
		         if(num2 != 0)
			      	result = num1 / num2;
			     else
			     {
		     		printf("denominator is zero\n");
			     	flag = 1;
		         }
			     break;
   }
   return result;
}
