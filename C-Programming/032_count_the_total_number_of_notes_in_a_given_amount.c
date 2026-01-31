#include <stdio.h>
int main() {
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("Total number of notes:\n");
    printf("Rs. 1000 = %d\n", amount / 1000);
    amount %= 1000;
    printf("Rs. 500 = %d\n", amount / 500);
    amount %= 500;
    printf("Rs. 100 = %d\n", amount / 100);
    amount %= 100;
    printf("Rs. 50 = %d\n", amount / 50);
    amount %= 50;
    printf("Rs. 10 = %d\n", amount / 10);
    amount %= 10;
    printf("Rs. 5 = %d\n", amount / 5);
    amount %= 5;
    printf("Rs. 2 = %d\n", amount / 2);
    amount %= 2;
    printf("Rs. 1 = %d\n", amount);
    return 0;
}