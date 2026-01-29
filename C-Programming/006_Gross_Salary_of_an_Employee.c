#include<stdio.h>
int main()
{
    int basic,da,hra,gross;
    printf("Enter Basic Salary: ");
    scanf("%d",&basic);
    da=0.95*basic;
    hra=0.3*basic;
    gross=basic+da+hra;
    printf("Gross Salary: %d",gross);

}
