#include <stdio.h>

int main (void) {
 char zone[5] = {'A', 'B', 'C', 'D', 'E'};   // ticket zone
 int price[5] = {400, 300, 250, 150, 100};   // ticket price

 printf("ticket prices by zone:\n");  
 printf("_________________________\n");
 printf("|\tzone\t|\tprice\t|\n");
 printf("-------------------------\n");

 int i=0;
 while(i<5) {
   printf("|\t");
   printf("%3c\t|",zone[i]);
   printf("\t%4d\t|\n",price[i]);
   i++;
 }

 printf("-------------------------\n");

 /* write your code here */
 // 1. ask user to select the ticket zone
 // 2. print the ticket price

 return 0;
}
