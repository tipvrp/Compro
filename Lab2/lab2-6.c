// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include <stdio.h>
int main(void)
{
    int dayLeft = 12; // จานวนวันก่อนถึงวันสอบ
    int dayPrepare = 14; // จานวนวันที่จะใช้เตรียมตัวสอบ
    if (dayLeft > dayPrepare)
    {
        printf("It is good.");
        printf(" (you should be well prepared.)\n");
    }
    else if (!(dayLeft == dayPrepare))
    {
        printf("It is ok.");
        printf(" (you still have some time.)\n");
    }
    else
    {
       printf("You have exactly what you need.\n");
    }
    printf("\n\nPlease plan your study carefully.\n\n");
    return 0;
}
