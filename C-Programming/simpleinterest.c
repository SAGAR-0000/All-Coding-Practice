#include<stdio.h>
int main()
{
    int P,R,T;
    float PI;
    printf("Enter Principal amount: ");
    scanf("%d",&P);
    printf("\nEnter Interest rate: ");
    scanf("%d",&R);
    printf("\nEnter Time: ");
    scanf("%d",&T);
    PI=(P*R*T)/100;
    printf("\nSimple Interest: %f",PI);
}