#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    switch(discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different\n");
            printf("Root1 = %.2f\nRoot2 = %.2f", root1, root2);
            break;
        case 0:
            switch(discriminant == 0) {
                case 1:
                    printf("Roots are real and same\n");
                    root1 = root2 = -b / (2 * a);
                    printf("Root1 = Root2 = %.2f", root1);
                    break;
                case 0:
                    printf("Roots are complex and different\n");
                    realPart = -b / (2 * a);
                    imaginaryPart = sqrt(-discriminant) / (2 * a);
                    printf("Root1 = %.2f + %.2fi\nRoot2 = %.2f - %.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
                    break;
            }
            break;
    }
    return 0;
}