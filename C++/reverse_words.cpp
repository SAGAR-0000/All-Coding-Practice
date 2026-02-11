#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    string str, word;
    vector<string> words;
    cout << "Enter string: ";
    getline(cin, str);
    stringstream ss(str);
    while(ss >> word) {
        words.push_back(word);
    }
    cout << "Reversed words: ";
    for(int i = words.size()-1; i>=0; i--) {
        cout << words[i] << " ";
    }
    return 0;
}