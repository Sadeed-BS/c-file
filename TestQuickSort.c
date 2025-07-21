#include <stdio.h>

void main() {

    int arr[50];
    int n;
    printf("How many elements do you want to enter?\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int high = n-1;
    int low = 0;

}