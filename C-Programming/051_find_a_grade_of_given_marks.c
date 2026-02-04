#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    if(marks >= 90)
        printf("Grade: A");
    else if(marks >= 80)
        printf("Grade: B");
    else if(marks >= 70)
        printf("Grade: C");
    else if(marks >= 60)
        printf("Grade: D");
    else if(marks >= 40)
        printf("Grade: E");
    else
        printf("Grade: F");
    return 0;
}