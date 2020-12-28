#include <stdio.h>

int main(int argc, char *argv[]){

    char zahl = 3;
    char input_int;
    printf("Geben sie ein Zahl ein: ");
    scanf("%d", (int*) &input_int); // here we may oveflow the input_int and overwrite the value in zahl
    printf("Ihre Zahl ist: %d\n", input_int);
    printf("zahl: %d\n", zahl);

    char* input_string;
    printf("Geben etwas ein:  ");
    scanf("%s", input_string);
    printf("Ihre Eingabe ist: %s\n", input_string);

    return 0;
}
