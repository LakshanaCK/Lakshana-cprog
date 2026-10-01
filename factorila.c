#include <stdio.h>

int stack[10];
int top = -1;

void push(int n) {
    top++;
    stack[top] = n;
}

int main() {
    int num = 4;
    int result = 1;

    // Push multipliers to stack
    for (int i = 1; i <= num; i++) {
        push(i);
    }

    // Pop and multiply
    while (top >= 0) {
        result *= stack[top];
        top--;
    }

    printf("Factorial of 4 is: %d\n", result); // 24
    return 0;
}
