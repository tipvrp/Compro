/*
สังเกตผลลัพธ์ ของ continue และ break
*/

#include <stdio.h>
int main(void)
{
    int x;
    int sum = 0;
    for (x = 1; x <= 10; x++)
    {
        if (x == 5)
        {
            //continue;
            break;
            printf("we do %d times\n", x);
        }
        sum += x;
        printf("%d\n", sum);
    }
    
    return 0;
}