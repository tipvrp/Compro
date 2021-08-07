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
    //////////////////////////////////////////////////////////////input
    printf("Student Midterm Mark \n");
    for(i=0; i<5; i++)
    {
        printf ("Enter s%d mark : ",n[i]);
        scanf ("%f",&s[i]);
        sum += s[i];
    }
    //////////////////////////////////////////////////////////////show s.mark
    printf("Student\tMark\n");

    for(i=0; i<5; i++)
    printf ("s%d\t%2.1f\n",n[i],s[i]);

    //////////////////////////////////////////////////////////////show average
    av=sum/5;
    printf("Average is: %2.1f \nLower than average : ",av);

    //////////////////////////////////////////////////////////////show lower than av.
    for(i=0; i<5; i++)
    if (s[i]<av) printf("%2.1f, ",s[i]);
    printf("\b\b ");

    ///////////////////////////////////////////////////////////////sorting
    for(j=0;j<4;j++)
    for (i=0; i<4; i++)
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
    ///////////////////////////////////////////////////////////////show max to min
    printf("\nMax to Min \n");
    for (i=0; i<5; i++)printf("s%d\t%2.1f \n",n[i],s[i]);


    return 0;
}
