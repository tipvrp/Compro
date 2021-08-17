/*
เขียนโปรแกรมรับคะแนนนักศึกษาจำนวน n คนและหาค่าเฉลี่ย
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
    return 0;
}