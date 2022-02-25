#include<stdio.h>
#include<math.h>
int input_number()
{
  int a;
  printf("enter the number\n");
  scanf("%d"&a);
  return a;
}
int is_prime(int n)
{
  int i;
  for(i=2;i<sqrt(n);i++)
    {
      if(n%i==0)
        return 0;
      else
        return 1
    }
}
void output(int n,int is_prime)
{
  if(is_prime==0)
    printf("the number is prime\n");
  else
    printf("the number is composite\n")
}
main()
{
  int n is_prime;
  n=input_number();
  is_prime=is_prime(n);
  output(n,is_prime);
  return 0;   
}
