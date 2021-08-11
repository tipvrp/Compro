/*
เขียนโปรแกรมทายเลขจนกว่าจะถูก do while
*/
#include <stdio.h>
int main()
{
    int a = 4,pw;
    do
    {
        printf("\nEnter your password :");
        scanf("%d",&pw);
    }
    while (pw!=a);
    printf("\ncorrect !!");
    
}