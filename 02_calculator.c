#include <stdio.h>

int main(int argc, char *argv[]){
    int a = 3;
    printf("int a = %d\n", a);
    int b = 2;
    printf("int b = %d\n", b);

    printf("----------------------------------\n");

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("----------------------------------\n");

    float x = 3.;
    float y = 2.;
    printf("float x = %f\n", x);
    printf("float y = %f\n", y);

    printf("----------------------------------\n");

    printf("x + y = %f\n", x + y);
    printf("x - y = %f\n", x - y);
    printf("x * y = %f\n", x * y);
    printf("x / y = %f\n", x / y);
    // There is no modulo operator for floating points
    // printf("x %% y = %d\n", x % y);

    printf("----------------------------------\n");

    x = 1.;
    printf("float x  = %.12f\n", x);
    float y0 = 0.1;
    float y1 = 0.00000001;
    printf("float y0 = %.12f\n", y0);
    printf("float y1 = %.12f\n", y1);
    printf("x + y0   = %.12f\n", x + y0);
    printf("x + y1   = %.12f\n", x + y1);


    return 0;
}
