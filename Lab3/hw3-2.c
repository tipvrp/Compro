#include <stdio.h>
int main(void)
{
  int a, b;
  printf("Enter width, height:");
  scanf("%d %d", &a, &b);
  for(int i = 0;i<a ; i++)
  {
    for(int j = 0;j<b;j++)
    {
      if(i==0||j==0||i==a-1||j==b-1)
      printf("*");
      else
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}
