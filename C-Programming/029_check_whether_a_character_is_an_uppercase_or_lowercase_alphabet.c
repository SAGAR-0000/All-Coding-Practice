#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if(ch >= 'a' && ch <= 'z')
        printf("%c is lowercase", ch);
    else if(ch >= 'A' && ch <= 'Z')
        printf("%c is uppercase", ch);
    else
        printf("%c is not an alphabet", ch);
    return 0;
}