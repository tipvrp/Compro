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
    for(i=1,sum=0; i<=10; i++)
    {
        printf("\n%d. Enter value : ", i);
        scanf("%d", &input);
        sum = sum +input;
    }
    return 0;
}
