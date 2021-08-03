// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include<stdio.h>
int main(void)
{
    int i;
    int input;
    int sum;
    printf("Enter ten values");
    i=1;
    sum=0;
    while(i<=10)
    {
        printf("\n%d. Enter value : ", i);
        scanf("%d", &input);
        sum = sum +input;
        i++;
    }
    return 0;
}
