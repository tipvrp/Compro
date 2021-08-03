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
    user_guess = 0;
    while(user_guess!=hidden_number)
    {
        printf("Guess my number :");
        scanf("%d", &user_guess);
    }
    printf("Good guess !!\n");
    return 0;
}
