//เนื้อร้องเพลง Five Little Ducks
//105 words
#include <stdio.h>
int main(void)
{
  for(int i=7;i>0;i--)
  {
      if(i>2)
        printf("\n\n%d little ducks ",i-2);
      else if (i==2)
        printf("\n\nSad mother duck ");
      else 
        printf("\n\n5 little ducks ");
      printf("went out one day\nOver the hill and far away\nMother duck said, \"Quack, quack, quack, quack\"\n");
      if(i>3)
      {
        printf("But only %d ",i-3);
      }
      else if(i==3) printf("But none of the five ");
      else printf("And all of the five ");
      printf("little ducks came back\n");
      if(i>3)
        for(int j=1;j<i-2;j++)  
        {
            printf("%d",j);
            if(j<i-3)printf(", ");
        }
  }
}
