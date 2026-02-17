#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int val) {
    if (top < MAX - 1) 
    {
        stack[++top] = val;
    } else {
        printf("Stack Overflow!\n");
    }
}

int pop() {
    if (top >= 0){
    return stack[top--];
    } else {
        printf("Stack Underflow!\n");
    }
    return -1;
}

void reverseQueue(int Q[]) {
   
    for (int i = 0; i < MAX; i++) {
        push(Q[i]);
    }
    for (int i = 0; i < MAX; i++) {
        Q[i] = pop();
    }
}

int main() {
    int Q[MAX] = {10, 20, 30, 40, 50};
    
    reverseQueue(Q);

    printf("Reversed Queue: ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", Q[i]);
    }
    return 0;
}