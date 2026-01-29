#include<stdio.h>
int main()
{
    int base,height;
    float area;
    printf("Enter Base of Triangle : ");
    scanf("%d",&base);
    printf("Enter height of Triangle : ");
    scanf("%d",&height);
    area=0.5*base*height;
    printf("Area of Triangle is: %f", area);
}
