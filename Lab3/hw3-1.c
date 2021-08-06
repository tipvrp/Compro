#include <stdio.h>
int main(void)
{
  char a;
  int b, c, count;
  printf("please enter [o or e] [start] [stop]:");
  scanf("%c %d %d", &a, &b, &c);
  if (a == 'o')
  {
    if (b % 2 == 1)
      count = b;
    else
      count = b + 1;
  }
  else if (a == 'e')
  {
    if (b % 2 == 0)
      count = b;
    else
      count = b + 1;
  }
  else
  {
    printf("Error");
    count = c + 1;
  }
  while (count <= c)
  {
    printf("%d ", count);
    count += 2;
  }
  return 0;
}
