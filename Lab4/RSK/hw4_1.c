#include <stdio.h> 
int main(void)
{
 
  int grade[] = {1,2,4,3,0,1,2,3,4,4};
  int count[5] = {0}; // grades counter
  int avg;
 
  int size = sizeof(grade) / sizeof(int); // size of array
 
  int i = 0, j = 0;
  int sum = 0;
  while (i < size)
  {
    count[grade[i]]++;
    sum += grade[i];
    i++;
  }
 
  printf("_________________________________\n");
  printf("|\tgrade\t|\tamount\t|\n"); 
  printf("---------------------------------\n");
 
  i = 0;  
  int max = 0;
  while (i < 5)
  {
    printf("|\t");
    printf("%3d\t|", i);
    printf("\t%4d\t|\n", count[i]);
    if (count[i] > max) //เทียบหาค่า max
      max = count[i];   //ให้ max = count[i]
    i++;
  }
 
  printf("---------------------------------\n");
  printf("average grade = %.2f\n", sum * 1.0 / size);
  printf("Mode =");
  for (i = 0; i < 5; i++)
    if (count[i] == max) //ถ้า count[i] == max ให้ printf("%d ", i);
      printf(" %d", i);
  //----------------------------------- เรียงข้อมูลใน array จากน้อยไปหามาก
  int temp;
  for (i = 0; i < size; i++)
    for (j = 0; j < size-1 ; j++)
      if (grade[j] > grade[j+1]) 
      {
        temp = grade[j];
        grade[j] = grade[j+1];
        grade[j+1] = temp;  // สลับค่า
      }
  //------------------------------------------------------------------
 
  if (size % 2) // ถ้าจำนวนเป็นเลขคี่
    printf("\nMedian = %d\n", grade[(size / 2)]); // เอาตัวตรงกลาง 
  else
    printf("\nMedian = %f\n", (grade[size / 2] + grade[(size -1 )/ 2 ]) / 2.0); 
    // เอาตัวตรงกลาง 2 ตัวบวกกันหาร 2
  
  for (i = 0; i < size; i++)
    printf("%d ",grade[i]);  // แสดงค่าที่เรียงแล้ว
  
  return 0;
}
