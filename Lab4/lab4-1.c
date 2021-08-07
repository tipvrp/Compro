// ID 6101011621060
// Name Veerapat Lamore
// Section 1
// Lab 1
// Lecturer PIV
#include <stdio.h>
int main (void)
{

    float s[5],sum=0,av ,next;
    int i,j,n[5]={1,2,3,4,5},no;

    for(i=0; i<5; i++)
    {
        printf ("s[%d] : ",i);
        scanf ("%f",&s[i]);
        sum += s[i];
    }
    //////////////////////////////////////////////////////////////input
    printf("Student\tMark\n");

    for(i=0; i<5; i++)
    printf ("s%d\t%2.1f\n",i+1,s[i]);
    //////////////////////////////////////////////////////////////show

    av=sum/5;
    printf("Average is: %2.1f \nLower than average : ",av);
    //////////////////////////////////////////////////////////////average

    for(i=0; i<5; i++)
    if (s[i]<av) printf("%2.1f, ",s[i]);
    printf("\b\b ");
    ///////////////////////////////////////////////////////////////lower than av.

    for(j=0;j<5;j++)
    for (i=0; i<5; i++)
    {
        if(s[i]<s[i+1])
        {
            next=s[i];
            s[i]=s[i+1];
            s[i+1]=next;

            no = n[i];
            n[i]=n[i+1];
            n[i+1]=no;
        }
    }

    printf("\nMax to Min : ");
    for (i=0; i<5; i++)printf("%2.1f, ",s[i]);
    printf("\b\b ");

    ///////////////////////////////////////////////////////////////max to min
    return 0;
}
