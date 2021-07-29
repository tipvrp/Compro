// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include <stdio.h>
int main(void)
{
    float a , b , c , Result ;//กำหนดตัวแปร
    printf("calResult \n" );
    printf("Please enter a :");
    scanf("%f", &a);
    printf("Please enter b :");
    scanf("%f", &b);
    printf("Please enter c :");
    scanf("%f", &c);
    Result = ((4.2*a)+(2.8*b))/(((5*b)/a)-(7*c));
    printf("Result = %f",Result);
    return 0;
}
