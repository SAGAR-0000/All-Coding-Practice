
// Q1
// A mobile selling shop wants to keep records of the mobile phones available in the shop.
// The manufacaturers name,model name,and price of the phone are among the details. 
// Write a program that uses structure to find the costliest and cheapest mobile phones in the shop.

#include<stdio.h>

struct details{
    char name[20];
    char model[20];
    float price;
};

int main()
{
    struct details d[5];
    struct details *ptr = d;
    struct details *high = ptr;
    struct details *low = ptr;

    // Taking input from the user
    for(int i=0; i<5; i++){
        printf("Enter details for phone %d\n", i+1);
        printf("Name: ");
        scanf("%s", d[i].name);
        printf("Model: ");
        scanf("%s", d[i].model);
        printf("Price: ");
        scanf("%f", &d[i].price);
    }

    for(int i=1; i<5; i++){
        if((ptr+i)->price > high->price) {
            high = ptr + i;
        }
        if((ptr+i)->price < low->price) {
            low = ptr + i;
        }
    }

    printf("Highest price phone: \nName: %s, Model: %s, Price: %.2f\n", high->name, high->model, high->price);
    printf("Lowest price phone: \nName: %s, Model: %s, Price: %.2f\n", low->name, low->model, low->price);

    return 0;
}