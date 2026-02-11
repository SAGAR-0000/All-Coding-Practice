#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str, rev;
    cout << "Enter string: ";
    cin >> str;
    rev = str;
    reverse(rev.begin(), rev.end());
    if(str == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}