// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include <stdio.h>
void main(void)
{
    int p[3][3] = { {1, 3, -4},
                    {1, 1, -2},
                    {-1, -2, 5} };
    int q[3][3] = { {8, 3, 0},
                    {3, 10, 2},
                    {0, 2, 6} };
    int r[3][3];
    int i, j;
    /////////////////////////////////////////////////sum
    for(i=0; i<3 ; i++)
    {
        for(j=0; j<3 ; j++)
        {
        r[i][j] = p[i][j] + q[i][j];
        }
    }
    /////////////////////////////////////////////////show
    printf("\nResult:\n"); // Matrix r
    for (i=0; i<3 ; i++)
    {
        for (j=0; j<3 ; j++)
        {
            printf("%d\t",r[i][j]);
        }
        printf("\n");
    }
    return;
}
