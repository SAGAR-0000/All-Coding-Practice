#include<stdio.h>
int main()
{
    float maths,chemistry,physics,computer,english;
    printf("Enter Marks of Maths: ");
    scanf("%f",&maths);
    printf("Enter Marks of Chemistry: ");
    scanf("%f",&chemistry);
    printf("Enter Marks of Physics: ");
    scanf("%f",&physics);
    printf("Enter Marks of Computer: ");
    scanf("%f",&computer);
    printf("Enter Marks of English: ");
    scanf("%f",&english);
    float percentage=(maths+physics+chemistry+english+computer)/5;
    printf("Percentage= %f",percentage);
}
