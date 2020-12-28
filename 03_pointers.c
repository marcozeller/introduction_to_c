#include <stdio.h>

void no_swap(int a, int b){
    int t = a;
    a = b;
    b = t;
}

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(int argc, char *argv[]){

    int m = 1;
    int n = 99;
    printf("m, n = %d, %d\n", m, n);

    no_swap(m, n);
    printf("no_swap(m, n)\n");
    printf("m, n = %d, %d\n", m, n);

    swap(&m, &n);
    printf("swap(m, n)\n");
    printf("m, n = %d, %d\n", m, n);

    int val = 42;
    printf("int val = 42\n");
    int* ptr = &val;
    printf("int* ptr = &val\n");

    printf("val hat Wert: %u und Addresse: %p\n", val, &val);
    printf("ptr hat Wert: %p und Addresse: %p\n", ptr, &ptr);

    printf("*&val = %d \n", *&val);
    printf("&*ptr = %p \n", &*ptr);

    return 0;
}
