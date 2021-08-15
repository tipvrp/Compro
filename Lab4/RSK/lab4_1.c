#include <stdio.h>

int main(void) {
 
 // array declaration
 int an_array[10];      
 
 // array initialization
 int a[2] = {1, 2};
 int b[] = {1, 2};     
 int c[5] = {0};
 int d[5] = {1, 2};     

 // show details
 printf("size of int is %d bytes\n", sizeof(int));
 printf("size of an array is %d bytes\n",sizeof(an_array));
 printf("the array can contain %d int elements\n", sizeof(an_array)/sizeof(int));

 // show elements
 for(int i=0; i<sizeof(an_array)/sizeof(int); i++) {
   printf("element %d of the array contains %d\n", i, an_array[i]);
 }

 return 0;
}
