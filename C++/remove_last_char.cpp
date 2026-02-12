#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    char ch;
    cout << "Enter string: ";
    cin >> str;
    cout << "Enter character to remove last occurrence of: ";
    cin >> ch;
    size_t pos = str.rfind(ch);
    if(pos != string::npos) {
        str.erase(pos, 1);
    }
    cout << "Result: " << str;
    return 0;
}