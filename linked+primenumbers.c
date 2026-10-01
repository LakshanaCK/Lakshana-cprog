#include <stdio.h>
#include <stdlib.h>

struct PrimeNode {
    int val;
    struct PrimeNode* next;
};

int main() {
    struct PrimeNode* n1 = (struct PrimeNode*)malloc(sizeof(struct PrimeNode));
    struct PrimeNode* n2 = (struct PrimeNode*)malloc(sizeof(struct PrimeNode));

    n1->val = 2; // First prime
    n1->next = n2;
    n2->val = 3; // Second prime
    n2->next = NULL;

    printf("Linked Primes: %d -> %d\n", n1->val, n2->val);

    free(n1); free(n2);
    return 0;
}
