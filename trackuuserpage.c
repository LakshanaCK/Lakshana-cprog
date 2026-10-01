#include <stdio.h>
#include <stdlib.h>

struct Node {
    int pageId;
    struct Node* next;
};

int main() {
    struct Node* p1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p2 = (struct Node*)malloc(sizeof(struct Node));

    p1->pageId = 101; 
    p1->next = p2;
    p2->pageId = 102; 
    p2->next = NULL;

    printf("Navigated: Page %d -> Page %d\n", p1->pageId, p2->pageId);

    free(p1); free(p2);
    return 0;
}
