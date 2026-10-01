#include <stdio.h>
#include <string.h>

char stack[3][20];
int top = -1;

void pushApp(char name[]) {
    if (top >= 2) {
        printf("App memory full!\n");
    } else {
        top++;
        strcpy(stack[top], name);
        printf("Opened: %s\n", name);
    }
}

void popApp() {
    if (top == -1) {
        printf("No background apps.\n");
    } else {
        printf("Closed: %s, going back to previous app.\n", stack[top]);
        top--;
    }
}

int main() {
    printf("--- Phone App Switcher ---\n");
    pushApp("WhatsApp");
    pushApp("Instagram");
    
    printf("\nPressing back button:\n");
    popApp();
    return 0;
}
