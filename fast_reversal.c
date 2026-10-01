#include <stdio.h>

int main() {
    char word[] = "data";
    int left = 0;
    int right = 3; // end of "data"

    while (left < right) {
        char temp = word[left];
        word[left] = word[right];
        word[right] = temp;
        left++;
        right--;
    }

    printf("Reversed array word: %s\n", word);
    return 0;
}
