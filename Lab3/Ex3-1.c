/*
เขียนโปรแกรมคำนวณเกรดโดยใช้ switch case
10คะแนน = A
9 คะแนน = B
8 คะแนน = C
7 คะแนน = D
6 คะแนน = F
*/

#include <stdio.h>
int main()
{
    int score;
    printf("Enter your score (10):");
    scanf("%d", &score);
    switch (score)
    {
    case 10:
        printf("grade A\n");
        break;
    case 9:
        printf("grade B\n");
        break;
    case 8:
        printf("grade C\n");
        break;
    case 7:
        printf("grade D\n");
        break;
    case 6:
        printf("grade F\n");
        break;
    default:
        printf("Error");
        break;
    }
}