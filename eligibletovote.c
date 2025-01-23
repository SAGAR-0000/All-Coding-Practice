#include <stdio.h>
int main()
{
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    if (age >= 18)
        printf("You can Vote!");
    else
        printf("Eligible For Vote!");
}