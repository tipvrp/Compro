#include <stdio.h>
int main(void)
{
    char a;
    int b, c;
    printf("please enter [o or e] [start] [stop]:");
    scanf("%c %d %d", &a, &b, &c);

    while (b <= c)
    {
        if (a == 'o' && (b % 2) == 1)
        {
            printf("%d ", b);
        }
        if (a == 'e' && (b % 2) == 0)
        {
            printf("%d ", b);
        }
        b++;
    }
    return 0;
}
