/*
เขียนโปรแกรมทายเลขจนกว่าจะถูก while
*/
#include <stdio.h>
int main()
{
    int a = 4,pw;
    printf("Enter your password :");
    scanf("%d",&pw);

    while (pw!=a)
    {
        printf("\nEnter your password :");
        scanf("%d",&pw);
    }
    
    printf("\ncorrect !!");
    
}