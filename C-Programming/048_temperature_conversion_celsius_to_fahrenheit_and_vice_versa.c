#include <stdio.h>
int main() {
    float temp;
    int choice;
    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter temperature: ");
    scanf("%f", &temp);
    if(choice == 1)
        printf("%.2f Celsius = %.2f Fahrenheit", temp, (temp * 9/5) + 32);
    else
        printf("%.2f Fahrenheit = %.2f Celsius", temp, (temp - 32) * 5/9);
    return 0;
}