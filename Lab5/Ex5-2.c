#include <stdio.h>
int main(void)
{

  int a[4][3] = {{1, 2, 3},
                 {4, 5, 6},
                 {7, 8, 9},
                 {10, 11, 12}};
  //-----------------------------แสดงเมตริกซ์ a 4x3
  for (int i = 0; i < 4; i++)
  {
    if (!i)
      printf("a=");
    printf("\t|");

    for (int j = 0; j < 3; j++)
      printf("%2d ", a[i][j]);

    printf("|\n");
  }
}