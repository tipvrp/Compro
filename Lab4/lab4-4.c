#include <stdio.h>
int main (void)
{
    int i, size=6;
    int smallest, temp, current, walk, j=1, last=size -1;
    int list[size];

    for(i=0;i<size;i++)
    {
        printf("Enter data%d:",i);
        scanf("%d", &list[ i ]);
    }

    for(current=0;current<last;current++)
    {
        smallest=current;

        for( walk=current+1; walk<=last; walk++)
            if( list[walk] < list[smallest] )
            smallest=walk;

            temp=list[current];
            list[current]=list[smallest];
            list[smallest]=temp;
            printf("---Round%d---\n", j++);
            for(i=0;i<size;i++)
            {
            printf("Output data%d: %d\n", i+1, list[ i ]);
            }
    }
    return 0;
}
