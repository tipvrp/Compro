#include <stdio.h>
int main()
{
    int a[4][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9},
                   {10, 11, 12}};

    // calculate row sum
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
        printf("sum of row %d is %d\n", i, sum);
    }
    printf("\n");
    // calculate col sum
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + a[j][i];
        }
        printf("sum of col %d is %d\n", i, sum);
    }
    printf("\n");
    // calculate array sum
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("sum of array is %d\n", sum);
}