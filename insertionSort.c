#include <stdio.h>

int main() {
    int arr[100];
    int n, i, temp, j;

    printf("How many elements do you want to sort?\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;

        // Shift elements greater than temp to the right
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
