// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include <stdio.h>
int main(void)
{
    int VAT;
    float price;
    printf("Please enter price ");
    scanf("%f", &price);
    printf("Please enter VAT ");
    scanf("%d", &VAT);
    printf("Total VAT is %f \n", price * VAT/100);
    printf("Total price is %f \n", (price * VAT/100) + price );
    return 0;
}
