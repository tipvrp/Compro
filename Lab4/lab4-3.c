#include <stdio.h>
int main(void)
{
  // Local declarations
  int size, i;
  float sum = 0, ave;
  //Statements
  printf("How many numbers do you want to average? ");
  scanf("%d", &size);
  //Create and fill variable-length array
  float ary[size];
  //Fill array and calculate sum
  for (i = 0; i < size; i++)
  {
    printf("Enter number %d :", i + 1);
    scanf("%f", &ary[i]);
    sum += ary[i];
  }
  ave = sum / size;
  //Print average
  printf("Average is: %f \nLower than average : ", ave);

  return 0;
}
