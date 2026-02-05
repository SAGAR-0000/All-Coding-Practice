#include<stdio.h>
#include<stdlib.h>

struct Student
{
    char name[20];
    float phy, chem, maths;
    float total;
};

int main()
{
    struct Student std[5];
    for(int i=0; i<5; i++)
    {
        printf("Enter Student Name: ");
        scanf("%s", std[i].name);
        printf("Enter Marks in Physics: ");
        scanf("%f", &std[i].phy);
        printf("Enter Marks in Chemistry: ");
        scanf("%f", &std[i].chem);
        printf("Enter Marks in Maths: ");
        scanf("%f", &std[i].maths);
        std[i].total = (std[i].phy + std[i].chem + std[i].maths) / 3;
        printf("Percentage: %.2f\n", std[i].total);
    }

    return 0;
}