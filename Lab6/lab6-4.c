#include <stdio.h>

int main(void) {

 int a[4] = {10,20,30,40};
 char b[4] = {'A','B','C','D'};
 int sum=0, i=0;

 int *ptr_a = a;
 char *ptr_b = b;

 for(i=0; i<4; i++) {
   sum += *ptr_a;
   printf("%c = %d, ", *ptr_b++, *ptr_a++);
 }
 printf("\nSum = %d\n",sum);

 for(i=0; i<4; i++) {
   sum -= *(a+i);
   printf("%c = -%d, ", *(b+i), *(a+i));
 }
 printf("\nSum = %d\n",sum);

 for(i=1; i<=4; i++) {
   sum += *(ptr_a-i);
   printf("%c = %d, ", ptr_b[-i], ptr_a[-i]);
 }
 printf("\nSum = %d\n",sum);

 return 0;
}
