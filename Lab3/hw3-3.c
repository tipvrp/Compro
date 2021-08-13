//เนื้อร้องเพลง Five Little Ducks
//138 words
#include <stdio.h>
int main(void)
{
  for(int i=7;i>0;i--)
  {
      if(i>2)
        printf("\n\n%d little ducks went out one day\n",i-2);
      else if (i==2)
        printf("\n\nSad mother duck went out one day\n");
      else 
        printf("\n\n5 little ducks went out one day\n");
      printf("Over the hill and far away\n");
      printf("Mother duck said, \"Quack, quack, quack, quack\"\n");
      if(i>3)
      {
        printf("But only %d little ducks came back\n",i-3);
        for(int j=1;j<i-2;j++)  
        {
            printf("%d",j);
            if(j<i-3)printf(", ");
        }
      }
      else if(i==3) printf("But none of the five little ducks came back\n");
      else if(i==2) printf("And all of five little ducks came back\n");
      else printf("And all of the five little ducks came back!\n");
  }
}
