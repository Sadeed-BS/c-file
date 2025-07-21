#include <stdio.h>

int main() {
    int var = 20;   // actual variable declaration
    int *ptr;       // pointer variable declaration

    ptr = &var;     // store address of var in pointer variable

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value stored in ptr (address of var): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}