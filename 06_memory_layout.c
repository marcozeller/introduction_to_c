#include <stdio.h>

int main(int argc, char *argv[]){

    char a1 = 1;
    short a2 = 2;
    int a3 = 3;
    long a4 = 4;
    long long a5 = 5;

    float b1 = 1.;
    double b2 = 2.;
    long double b3 = 3.;

    printf("Variable a1 is stored at address %p and has size %d bytes\n", &a1, (int)sizeof(a1));
    printf("Variable a2 is stored at address %p and has size %d bytes\n", &a2, (int)sizeof(a2));
    printf("Variable a3 is stored at address %p and has size %d bytes\n", &a3, (int)sizeof(a3));
    printf("Variable a4 is stored at address %p and has size %d bytes\n", &a4, (int)sizeof(a4));
    printf("Variable a5 is stored at address %p and has size %d bytes\n", &a5, (int)sizeof(a5));

    printf("Variable b1 is stored at address %p and has size %d bytes\n", &b1, (int)sizeof(b1));
    printf("Variable b2 is stored at address %p and has size %d bytes\n", &b2, (int)sizeof(b2));
    printf("Variable b3 is stored at address %p and has size %d bytes\n", &b3, (int)sizeof(b3));

    // C99 introduces more standardized types
    // int32_t 

    return 0;
}
