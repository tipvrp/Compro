#include <stdio.h>
#define ROW 4
#define COL 3

int main(void) {
  int a[ROW][COL] = {{1,2,3},
                     {4,5,6},
                     {7,8,9},
                     {10,11,12}};
  
  // calculate row sum
  for(int i=0; i<ROW; i++) {
    int j;
    int sum = 0;
    for(j=0; j<COL; j++) {
      sum = sum + a[i][j];
    }
    printf("sum of row %d is %d\n",i,sum);
  }

  return 0;
}
