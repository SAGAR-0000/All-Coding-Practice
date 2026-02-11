#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int freq[256] = {0};
    cout << "Enter string: ";
    getline(cin, str);
    for(char c : str) {
        freq[c]++;
    }
    for(int i=0; i<256; i++) {
        if(freq[i] != 0) {
            cout << "'" << (char)i << "' occurs " << freq[i] << " times.\n";
        }
    }
    return 0;
}