#include <stdio.h>
#define ONE_D d
#define TWO_D an_array2

int main(void){

  // array declaration
  int an_array[10];
  // array initialization 1D
  int a[2] = {1, 2};
  int b[] = {1, 2};
  int c[5] = {0};
  int d[5] = {1, 2};

  // show elements 1D
  for (int i = 0; i < sizeof(ONE_D) / sizeof(int); i++)
    printf("element [%d] = %d\n", i, ONE_D[i]);
  //---------------------------------------------------------------

  // array declaration
  int an_array2[5][5];
  // array initialization 2D
  int aa[2][4] = {{1, 2, 3, 4},
                  {5, 6, 7, 8}};

  int bb[][2] = {{1, 2},
                 {3, 4},
                 {3, 4}};

  int cc[5][5] = {0};
  int dd[5][5] = {1, 2};

  // show elements 2D
  for (int i = 0; i < sizeof(TWO_D) / sizeof(TWO_D[0]); i++)
    for (int j = 0; j < sizeof(TWO_D[0]) / sizeof(int); j++)
      printf("element [%d][%d] = %d\n", i, j, TWO_D[i][j]);

  return 0;
}