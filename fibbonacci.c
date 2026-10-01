#include <stdio.h>

int queue[2] = {0, 1}; // Starts with 0 and 1
int front = 0;

int main() {
    int nextTerm;
    
    printf("Fibonacci Sequence: %d %d ", queue[0], queue[1]);

    for (int i = 2; i < 6; i++) {
        nextTerm = queue[front] + queue[(front + 1) % 2];
        printf("%d ", nextTerm);

        // Slide the queue forward to store the latest values
        queue[front] = nextTerm;
        front = (front + 1) % 2;
    }
    printf("\n");
    return 0;
}
