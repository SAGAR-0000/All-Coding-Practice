#include <stdio.h>
int main() {
    int n, sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0 || sum > 9) {
        if(n == 0) {
            n = sum;
            sum = 0;
        }
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    printf("Generic root is: %d", sum);
    return 0;
}