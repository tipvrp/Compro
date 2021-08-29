#include <stdio.h>

int main(void) {
 int a = 2;
 int b = 4;
 int c;
 int *pc = &b;

 printf("\nTRY 1:\n");
 printf("-----------\n");
 printf("a = %d\n",a);
 printf("b = %d\n",b);
 printf("a + b = %d\n",a+b);
  c = b;  // let c = b
 printf("\nlet c = b\n");
 printf("a + c = %d\n",a + c);

 c = 3;  // let c = 3
 printf("\nlet c = 3\n");
 printf("a + c = %d\n",a + c);
 printf("a + b = %d\n",a + b);

 printf("\n\nTRY 2:\n");
 printf("-----------\n");
 printf("a = %d\n",a);
 printf("b = %d\n",b);
 printf("a + b = %d\n",a+b);
  pc = &b;  // let c = b
 printf("\nlet pc = &b\n");
 printf("a + *pc = %d\n",a + *pc);

 *pc = 3;  // let c = 3
 printf("\nlet *pc = 3\n");
 printf("a + *pc = %d\n",a + *pc);
 printf("a + b = %d\n",a + b);

 return 0;
}
