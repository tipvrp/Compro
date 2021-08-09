// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include <stdio.h>
void main(void)
{
    int A[3][3] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9} };
    int B[3][3];
    int C[3][3];
    int i, j, k,sum;
    /////////////////////////////////////////////////transpose
    for(i=0; i<3 ; i++)
    {
        for(j=0; j<3 ; j++)
        {
        B[i][j] = A[j][i] ;
        }
    }
    /////////////////////////////////////////////////*matrix
    for(i=0; i<3 ; i++)
    {
        for(j=0; j<3 ; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
            {
                sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }
    }
    //////////////////////////////////////////////////show matrix B
    printf("\nResult B:\n");
    for (i=0; i<3 ; i++)
    {
        for (j=0; j<3 ; j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    /////////////////////////////////////////////////show matrix C
    printf("\nResult C:\n");
    for (i=0; i<3 ; i++)
    {
        for (j=0; j<3 ; j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return;
}
