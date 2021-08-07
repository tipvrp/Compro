// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include <stdio.h>
int main (void)
{

    float s[5],sum=0,av ;
    int i;

    for(i=0; i<5; i++)
    {
        printf ("s[%d] : ",i);
        scanf ("%f",&s[i]);
        sum += s[i];
    }
    printf("Student\tMark\n");
    for(i=0; i<5; i++)
    printf ("s%d\t%2.1f\n",i+1,s[i]);

    av=sum/5;
    printf("Average is: %2.1f",av);
    return 0;
}
