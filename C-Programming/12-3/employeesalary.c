// Q2
// Define a structure called employee that consist of the following methods;name,age,address,basic pay,HRA,DA,allowencess,PF,Income tax,Deductions and salary Write a program that does the following :
// 1>Calculate the salary as given below;
// salary=basic pay+allowences-deductions
// use the following to calculate the HRA,DA,Income tax and DF

#include<stdio.h>
#include<stdlib.h>

struct employee
{
    char name[20];
    int age;
    char address[30];
    float basic_pay, HRA, DA, allowences, PF, income_tax, deductions, salary;
};

int main()
{
    struct employee *emp = (struct employee*)malloc(sizeof(struct employee));

    printf("Enter employee Name: ");
    scanf("%s", emp->name);
    printf("Enter Age: ");
    scanf("%d", &emp->age);
    printf("Enter Address: ");
    scanf("%s", emp->address);
    printf("Enter Basic Pay: ");
    scanf("%f", &emp->basic_pay);

    if (emp->basic_pay < 5000) {
        emp->HRA = 0.10 * emp->basic_pay;
        emp->DA = 0.15 * emp->basic_pay;
        emp->PF = 0.03 * emp->basic_pay;
        emp->income_tax = 0.01 * emp->basic_pay;
    } else if (emp->basic_pay >= 5000 && emp->basic_pay <= 10000) {
        emp->HRA = 0.30 * emp->basic_pay;
        emp->DA = 0.20 * emp->basic_pay;
        emp->PF = 0.05 * emp->basic_pay;
        emp->income_tax = 0.02 * emp->basic_pay;
    } else {
        emp->HRA = 0.40 * emp->basic_pay;
        emp->DA = 0.30 * emp->basic_pay;
        emp->PF = 0.10 * emp->basic_pay;
        emp->income_tax = 0.04 * emp->basic_pay;
    }

    emp->allowences = emp->HRA + emp->DA;
    emp->deductions = emp->PF + emp->income_tax;
    emp->salary = emp->basic_pay + emp->allowences - emp->deductions;

    printf("Basic Pay: %.2f\n", emp->basic_pay);
    printf("Allowance: %.2f\n", emp->allowences);
    printf("Deductions: %.2f\n", emp->deductions);
    printf("Salary: %.2f\n", emp->salary);

    return 0;
}