#include <stdio.h>
int main() {
    float cp, sp, amount;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);
    if(sp > cp) {
        amount = sp - cp;
        printf("Profit = %.2f", amount);
    } else if(cp > sp) {
        amount = cp - sp;
        printf("Loss = %.2f", amount);
    } else {
        printf("No profit no loss");
    }
    return 0;
}