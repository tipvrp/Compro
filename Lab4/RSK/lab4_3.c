#include <stdio.h>

int main (void) {

  int grade[] = {0, 2, 3, 1, 2, 3, 4, 2, 1, 3, 2, 1, 2, 0, 3, 4, 4};
  int count[5] = {0}; // grades counter
  int avg;

  int size = sizeof(grade)/sizeof(int); // size of array

  int i=0;
  int sum=0;
  while(i<size) {
    count[grade[i]]++;
    sum+=grade[i];
    i++;
  }
  
  printf("_________________________\n");
  printf("|\tgrade\t|\tamount\t|\n");
  printf("-------------------------\n");
  
  i=0;
  while(i<5) {
    printf("|\t");
    printf("%3d\t\t|",i);
    printf("\t%4d\t|\n",count[i]);
    i++;
  }

  printf("-------------------------\n");
  printf("average grade = %.2f\n",sum*1.0/size);
  
  return 0;
}
