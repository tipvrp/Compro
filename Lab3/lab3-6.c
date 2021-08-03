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
    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            if(i==j)
            printf("%d\t", 1);
            else
            printf("%d\t", 0);
        }
        printf("\n");
    }
return 0;
}
