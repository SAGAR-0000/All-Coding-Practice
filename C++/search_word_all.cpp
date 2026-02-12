#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, word;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Enter word to search: ";
    cin >> word;
    size_t pos = str.find(word);
    bool found = false;
    while(pos != string::npos) {
        cout << "Found at index: " << pos << endl;
        found = true;
        pos = str.find(word, pos + 1);
    }
    if(!found) cout << "Not found";
    return 0;
}