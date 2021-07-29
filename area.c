// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include <stdio.h>
int main(void)
{
    float R , A ,PI=22/7.0; //กำหนดตัวแปร รัสมี พื้นที่ และค่าพาย
    printf("Circle Area Calculator  \n" );
    printf("Please enter radius :");
    scanf("%f", &R);
    A =PI*R*R; // คำนวณพื้นที่ของวงกลม
    printf("Area = %f", A );

    return 0;
}
