#include <iostream>
#include <string>
using namespace std;
bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);
    for(size_t i = 0; i < str.length(); i++) {
        if(!isVowel(str[i])) {
            result += str[i];
        }
    }
    cout << "String without vowels: " << result;
    return 0;
}