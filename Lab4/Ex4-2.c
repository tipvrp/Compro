/*
เขียนโปรแกรมรับคะแนนนักศึกษาจำนวน n คนและหาค่าเฉลี่ย
แสดงว่า Pass! ที่คะแนนมากกว่าเท่ากับค่าเฉลี่ย
แสดงว่า Fail! ที่คะแนนน้อยกว่าค่าเฉลี่ย
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of student :");
    scanf("%d",&n);
    float score[n],avg,sum=0;
    for(int i = 0;i<n;i++)
    {
        printf("No.%d :",i+1);
        scanf("%f",&score[i]);
        sum+=score[i];
    }

    avg=sum/n;
    printf("Average = %f\n",avg);

    for(int i = 0;i<n;i++)
            if (score[i]>=avg)
                printf("No.%d Pass !\n",i+1);
            else
                printf("No.%d Fail !\n",i+1);
    return 0;
}



