#include <stdio.h>
#define SIZE 5

int main(void) {
 char hello[] = {'H','E', 'L', 'L','0'};
 int count[] = {1, 2, 3, 4, 5};

 char *pt1 = hello;
 int *pt2 = count;

 printf("\narray hello\n");
 printf("-----------------\n");
 printf("[pointer pt1]\t\t\t[array hello]\n");
 for(int i=0; i<SIZE; i++) {
   printf("%p -> %c\t\t",pt1,*pt1);
   printf("%p -> %c\n",&hello[i],hello[i]);
   pt1++;
 }

 printf("\narray count\n");
 printf("-----------------\n");
 printf("[pointer pt2]\t\t\t[array count]\n");
 int i=0;
 while(pt2<(count+SIZE)) {
   printf("%p -> %d\t\t",pt2, *pt2);
   printf("%p -> %d\n",(count+i),*(count+i));
   pt2++;
   i++;
 }

 return 0;
}
