#include <iostream>
#include <queue>
using namespace std;


int getMax(int arr[], int n) {
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

void distribute(int arr[], int n, queue<int> q[], int power) {
    for (int i = 0; i < n; i++) {
        int digit = (arr[i] / power) % 10;
        q[digit].push(arr[i]);
    }
}


void collect(int arr[], queue<int> q[]) {
    int index = 0;
    for (int i = 0; i < 10; i++) {
        while (!q[i].empty()) {
            arr[index] = q[i].front();
            q[i].pop();
            index++;
        }
    }
}

int main() {
    int n;
    cout << "Enter Number Of values: ";
    cin >> n;
    
    int* a = new int[n]; 
    
    cout << "Enter the values: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    
    int max_val = getMax(a, n);
    int power = 1;
    queue<int> digitalQueue[10]; 
    

    while (max_val / power > 0) {
        distribute(a, n, digitalQueue, power);
        collect(a, digitalQueue);
        power *= 10;
    }
    
    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    

    delete[] a; 
    return 0;
}