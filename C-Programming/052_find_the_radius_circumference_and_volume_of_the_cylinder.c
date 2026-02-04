#include <stdio.h>
#define PI 3.14159
int main() {
    float radius, height, circumference, volume;
    printf("Enter radius and height of cylinder: ");
    scanf("%f %f", &radius, &height);
    circumference = 2 * PI * radius;
    volume = PI * radius * radius * height;
    printf("Circumference = %.2f\nVolume = %.2f", circumference, volume);
    return 0;
}