#include <stdio.h>

int main(int argc, char *argv[]){

    // In order to allocate multiple variables of the same type C provides arrays
    int a[3] = {1, 2, 3};
    printf("%d, %d, %d\n", a[0], a[1], a[2]);

    // a is simply a pointer to the first element
    printf("%p\n", a);
    printf("%p\n", &a[0]);

    // a[0] is simply the pointer to the next element dereferenced
    printf("%d\n", a[0]);
    printf("%d\n", *a);
    printf("%d\n", *(a+0));
    // a[1] is simply the pointer to the next element dereferenced
    printf("%d\n", a[1]);
    printf("%d\n", *(a+1));

    // strings are arrays of char with a null terminator
    char string[6] = {'w', 'o', 'r', 'l', 'd', 0};
    printf("%s\n", string);
    // null terminator is used by functions to determine when a string has ended
    // since the second "string" is stored directly before the first and does not end with a null terminator printf reads further until it receives a null terminator.
    char string2[5] = {'h', 'e', 'l', 'l', 'o'};
    printf("%s\n", string2);

    return 0;
}
