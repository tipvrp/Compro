#include <stdio.h>
int main(void)
{
  int a[3][3] = {{1, 2, 3},
                 {4, 5, 6},
                 {7, 8, 9}};

  int at[3][3];
  //----------------------------copy a to at
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      at[i][j] = a[i][j];

  //-----------------------------transpose
  int temp;  
  for (int i = 0; i < 3; i++)
    for (int j = i+1; j < 3; j++)
    {
      temp = at[i][j];
      at[i][j] = at[j][i];
      at[j][i] = temp;
    }
  for (int i = 0; i < 3; i++)
  {
    if (!i)
      printf("a=");
    printf("\t|");
    for (int j = 0; j < 3; j++)
      printf("%2d ", a[i][j]);
    printf("|\n");
  }
  printf("\n");
  for (int i = 0; i < 3; i++)
  {
    if (!i)
      printf("aT=");
    printf("\t|");
    for (int j = 0; j < 3; j++)
      printf("%2d ", at[i][j]);
    printf("|\n");
  }



}