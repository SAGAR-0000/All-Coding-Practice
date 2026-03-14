#include <stdio.h>
#include <string.h>
int main() {
    char name[100], idiot[] = "I AM IDIOT";
    printf("Enter your name: ");
    gets(name);
    strcpy(name, idiot);
    printf("Modified name: %s", name);
    return 0;
}