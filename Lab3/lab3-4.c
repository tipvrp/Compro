// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include<stdio.h>
int main(void)
{
    int x;
    int sum = 0 ;
    for(x=1;x<=100;x++)
    {
        if(x==10)
        {
            break;
            printf("we do %d times\n", x);
        }
        sum +=x;
        printf("%d\n", sum);
    }
    return 0;
}
