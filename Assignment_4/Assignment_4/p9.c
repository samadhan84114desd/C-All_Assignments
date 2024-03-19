/*

Write a function to indicate whether given number is prime or not. Write another function to
print prime numbers in the given range.

*/


int main()
{

   int num,min,max;

   printf("Enter three numbers:");
   scanf("%d %d %d",&num,&min,&max);
   is_no_prime(num);
   prime_nos(min,max);
   return 0;
