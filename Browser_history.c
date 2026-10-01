#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct WebPage {
    char url[50];
    struct WebPage* next;
};

int main() {
    // Creating history nodes manually
    struct WebPage* first = (struct WebPage*)malloc(sizeof(struct WebPage));
    struct WebPage* second = (struct WebPage*)malloc(sizeof(struct WebPage));
    struct WebPage* third = (struct WebPage*)malloc(sizeof(struct WebPage));

    // Assigning data
    strcpy(first->url, "google.com");
    first->next = second;

    strcpy(second->url, "github.com");
    second->next = third;

    strcpy(third->url, "stackoverflow.com");
    third->next = NULL;
    printf("--- Browser History Trail ---\n");
    printf("%s -> %s -> %s\n", first->url, second->url, third->url);

    // Free memory
    free(first);
    free(second);
    free(third);
    return 0;
}
