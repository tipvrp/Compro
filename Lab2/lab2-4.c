// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include <stdio.h>
int main(void)
{
    int dayLeft = 12; // จำนวนวันก่อนถึงวันสอบ
    int dayPrepare = 14; // จำนวนวันที่ใช้เตรียมตัวสอบ
    if (dayLeft <= dayPrepare)
    {
        printf("It is ok");
        printf(" (you still have some time)\n");
    }
    else
    {
        printf("It is good");
        printf(" (you should be well prepared)\n");
    }
    printf("\n\nPlease plan your study carefully\n\n");
    return 0;

}
