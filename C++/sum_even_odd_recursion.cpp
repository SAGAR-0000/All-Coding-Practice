#include <iostream>
using namespace std;
void printEvenOdd(int start, int end) {
    if(start > end) return;
    cout << start << " ";
    printEvenOdd(start + 2, end);
}
int main() {
    int start, end;
    cout << "Enter range (start end): ";
    cin >> start >> end;
    cout << "Numbers: ";
    printEvenOdd(start, end); // Basic version, prints start, start+2...
    return 0;
}