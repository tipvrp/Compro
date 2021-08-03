// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include<stdio.h>
int main(void)
{
    int hidden_number;
    int user_guess;
    hidden_number = 5;
    do
    {
        printf("Guess my number :");
        scanf("%d", &user_guess);
    }
    while(user_guess!=hidden_number);
    printf("Good guess !!\n");
    return 0;
}
