#include <stdio.h>
int main()
{
 int a = 100;
 float b = 10.5;
 char c = 'C';
 int *pt1;
 float *pt2;
 char *pt3;
 pt1 = &a;   // pointer to a
 pt2 = &b;   // pointer to b
 pt3 = &c;   // pointer to c

 printf("\n Using primitive variables :\n");
 printf("-----------------------\n");
 printf ( " a = %d\n",a);
 printf ( " b = %f\n",b);
 printf ( " c = %c\n",c);

 printf("\n Size of primitive variables :\n");
 printf("-----------------------\n");
 printf ( " size of a = %d\n",(int)sizeof(a));
 printf ( " size of b = %d\n",(int)sizeof(b));
 printf ( " size of c = %d\n",(int)sizeof(c));

 printf("\n Using & operator :\n");
 printf("-----------------------\n"); 
 printf ( " address of a = %p\n",&a);
 printf ( " address of b = %p\n",&b);
 printf ( " address of c = %p\n",&c);
 
 printf("\n Using & and * operators :\n");
 printf("-----------------------------\n");
 printf ( " value at address of a = %d\n",*(&a));
 printf ( " value at address of b = %f\n",*(&b));
 printf ( " value at address of c = %c\n",*(&c));
 
 printf("\n Using pointers :\n");
 printf("----------------------------------\n");
 printf ( " value of pt1 = %p\n",pt1);
 printf ( " value of pt2 = %p\n",pt2);
 printf ( " value of pt3 = %p\n",pt3);

 printf("\n Size of pointers :\n");
 printf("-----------------------\n");
 printf ( " size of pt1 = %d\n",(int)sizeof(pt1));
 printf ( " size of pt2 = %d\n",(int)sizeof(pt2));
 printf ( " size of pt3 = %d\n",(int)sizeof(pt3));
 
 printf("\n Using * operator with pointers :\n");
 printf("----------------------------------\n");
 printf ( " value at address that pt1 pointed to = %d\n",*pt1);
 printf ( " value at address that pt2 pointed to = %f\n",*pt2);
 printf ( " value at address that pt3 pointed to = %c\n",*pt3);

 printf("\n Using & operator with pointers :\n");
 printf("-----------------------\n"); 
 printf ( " address of pt1 = %p\n",&pt1);
 printf ( " address of pt2 = %p\n",&pt2);
 printf ( " address of pt3 = %p\n\n",&pt3);

 return 0;
}
