/*
การวน loop ซ้อน loop
*/

#include <stdio.h>
int main(void)
{
  int n=0;
  for (int i= 0; i < 4; i++)
  {
        for (int j = 0; j < 3; j++)
        {
            printf("count = %d\ni=%d j=%d\n",n++,i,j);
        }    
  }
  return 0;
}
