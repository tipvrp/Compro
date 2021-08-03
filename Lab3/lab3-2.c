// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include<stdio.h>
int main(void)
{
    int i;
    int j;
    int num = 0;
    for(i=-5;i<=20;i+=2) // วนรอบ for ที่ 1
    { 
        printf("%d\n", num);
        num = num + 1;
    }
    j=0;
    for(i=0;j+i<=100;i++) //วนรอบ for ที่ 2
    { 
        printf("%d\n", j+i);
        j = j+1;
    }
    return 0;
}
