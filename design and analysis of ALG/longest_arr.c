#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[] = {12, 45, 23, 67, 34, 89, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, size);
    printf("Maximum element in the array is: %d\n", max);
    return 0;
}
