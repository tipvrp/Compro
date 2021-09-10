#include<stdio.h>
int sum_digits(int number)
{
  if (number < 10)  
    return number;
  
  else
    return number%10 + sum_digits(number/10);
  
}
int main()
{
  int a,sum;
  printf("enter a number:");
  scanf("%d",&a);
  sum = sum_digits(a);
  printf("sum = %d",sum);
  return 0;
}
