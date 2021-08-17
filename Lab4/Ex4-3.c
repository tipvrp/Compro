/*
เขียนโปรแกรมรับคะแนนนักศึกษาจำนวน n คนและหาค่าเฉลี่ย
แสดงคนที่น้อยที่สุด และมากที่สุด
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of student :");
    scanf("%d",&n);
    float score[n],min=100,max=0;
    for(int i = 0;i<n;i++)
    {
        printf("No.%d :",i+1);
        scanf("%f",&score[i]);
        if (score[i]<min) min = score[i];
        if (score[i]>max) max = score[i];
    }

    printf("min = %f\n",min);
    for(int i = 0;i<n;i++)
            if (score[i]==min)
                printf("No.%d \n",i+1);
    printf("max = %f\n",max);
    for(int i = 0;i<n;i++)
            if (score[i]==max)
                printf("No.%d \n",i+1);
    return 0;
}