// BMI calculator
#include <stdio.h>
void main()
{
    float bmi,w,h;
    printf("Enter weight(kg) and height(cm):");
    scanf("%f %f", &w,&h);
    bmi = w/(h*h*0.0001);
    printf("BMI = %.2f\n",bmi);
    if(bmi <= 24.9)
    {
        printf("Normal");
    }
    else if(bmi >=25)
    {
        printf("Fat");
    }
    return;
}
