// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include <stdio.h>
int main(void)
{
    int VAT;
    VAT = 7;
    float price, total;
    price = 120; // ราคาสินค้า
    total = price * (VAT/100.0);
    printf("VAT rate is %d percent\n", VAT);
    printf("Total VAT is %f \n", total);
    return 0;
}
