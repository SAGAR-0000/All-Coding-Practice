#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str, res = "";
    int freq[256] = {0};
    cout << "Enter string: ";
    cin >> str;
    for(char c : str) {
        if(freq[c] == 0) {
            res += c;
            freq[c]++;
        }
    }
    cout << "String without repeats: " << res;
    return 0;
}