#include <stdio.h>
int main(void)
{
  int value, i, j, temp;
  printf("How many values (max=10) : ");
  scanf("%d", &value);
  int data[value];
  
  if (value >= 1 && value <= 10)
  {
    printf("Enter data : ");
    for (i = 0; i < value; i++)
      scanf("%d", &data[i]); //รับค่าข้อมูล
    //------------------------------เรียงข้อมูลจากน้อยไปมาก
    for (i = 0; i < value ; i++)    
      for (j = 0; j < value-1; j++)      
        if (data[j] > data[j+1]) 
        {
          temp = data[j];
          data[j] = data[j+1];
          data[j+1] = temp;
        }
    //-------------------------------------------------
    if ((data[i-value] >= 0) && (data[i-1] <= 100)) //ให้ data อยู่ในช่วง 0-100
    {
      printf("Sorted data : ");
      for (i = 0; i < value; i++)
        printf("%d ", data[i]);      
    }
    else 
      printf("Error !");    
  }
  else 
    printf("Error !");
  return 0;
}
