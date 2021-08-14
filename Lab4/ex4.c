#include "stdio.h"
#include "conio.h"
#include "string.h"
const n = 5;
int main()
{
  int i, j, nam[n], tmp;
  char key;
  for (i = 0; i < n; i++)
  {
    printf("Enter Namber [%d]:", i + 1);
    scanf("%d", &nam[i]);
  }

  do
  {
    printf("\n******Manu*******\n");
    printf("\n1.Max to Min");
    printf("\n2.Min to Max\n");
    printf("Enter 1 or 2 :");
    key = getche();

  } while (!(key == '1' || key == '2'));

  printf("\nData in Array Before Sort : ");
  for (i = 0; i < n; i++)
  {
    printf("%5d", nam[i]);
  }

  for (j = 0; j < n - 1; j++)
  {
    if (key == '1')
    {
      if (nam[j] < nam[j + 1])
      {
        tmp = nam[j];
        nam[j] = nam[j + 1];
        nam[j + 1] = tmp;
      }
    }
    else
    {
      if (nam[j] > nam[j + 1])
      {
        tmp = nam[j];
        nam[j] = nam[j + 1];
        nam[j + 1] = tmp;
      }
    }
  }
  printf("\nData in Array After  Sort : ");
  for (j = 0; j < n; j++)
  {
    printf("%5d", nam[j]);
  }
  return 0;
}
