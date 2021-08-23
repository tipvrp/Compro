/*
เขียนโปรแกรมรับรหัส นศ และคะแนน เก็บเป็นตัวแปรชุด 2 มิติ
*/

#include<stdio.h>
int main()
{
    int s[5][2];
    printf("Enter student ID and score (Ex 23142 10)\n");
    //------------------------------------รับค่า
    for(int i=0;i<5;i++)
    {
        printf("No.%d:",i+1);
        scanf("%d %d",&s[i][0],&s[i][1]);
    }
    //----------------------------------แสดงผล
    for (int i = 0; i < 5; i++)
      printf("No.%d [%d] = %d\n", i+1,s[i][0],s[i][1]);
        
        
}