#include <stdio.h>


void main() {
    int arr[50];
    int n, i, j, temp;
    printf("How many elements in array\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp ) {
            arr[j + 1] = arr[j];
            arr[j] = temp;
            j = j - 1;
        }
    }
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}