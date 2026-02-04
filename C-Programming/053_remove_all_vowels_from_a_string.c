#include <stdio.h>
#include <string.h>
int main() {
    char str[1000], result[1000];
    int i, j = 0;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            continue;
        } else {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("String after removing vowels: %s", result);
    return 0;
}