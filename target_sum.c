#include <stdio.h>

int main() {
    int arr[] = {2, 4, 7, 11, 15}; // Sorted array
    int target = 15; // We want 4 + 11
    
    int left = 0;
    int right = 4;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("Found numbers: %d + %d = %d\n", arr[left], arr[right], target);
            break;
        } else if (sum < target) {
            left++; // Need a larger sum
        } else {
            right--; // Need a smaller sum
        }
    }
    return 0;
}
