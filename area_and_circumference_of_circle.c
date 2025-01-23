#include<stdio.h>
int main()
{
    int radius;
    float area,circumference,PI=3.14;
    printf("Enter Radius: ");
    scanf("%d",&radius);
    area=PI*radius*radius;
    printf("Area of circle is: %f", area);
    circumference=2*PI*radius;
    printf("\n Circumference of circle is: %f", circumference);
}