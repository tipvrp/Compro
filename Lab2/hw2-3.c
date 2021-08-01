#include <stdio.h>
void main()
{
    int a,b ;
    printf("Enter a lowercase character:");
    scanf("%c", &a);
    if(a>=97&&a<=122) //เปรียบเทียบว่าใช่ตัวพิมพ์เล็กหรือเปล่า
    {
        b=a-32; //พิมพ์เล็ก --> พิมพ์ใหญ่ ( ASCII )
        printf("the uppercase character is %c",b);
    }
    else
    {
        printf("the input is not a lowercase character");
    }
    return ;
}
