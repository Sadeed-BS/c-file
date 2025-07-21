#include <stdio.h>

struct Address {
    char street[50];
    char city[50];
    int zip;
};

struct Person {
    char name[50];
    int age;
    struct Address address;
};

int main() {
    struct Person person;

    // Assigning values to the person structure
    snprintf(person.name, sizeof(person.name), "John Doe");
    person.age = 30;
    snprintf(person.address.street, sizeof(person.address.street), "123 Main St");
    snprintf(person.address.city, sizeof(person.address.city), "Anytown");
    person.address.zip = 12345;

    // Printing the values
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Address: %s, %s, %d\n", person.address.street, person.address.city, person.address.zip);

    return 0;
}