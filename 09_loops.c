#include <stdio.h>

int main(int argc, char *argv[]){

    int x = 0;
    while(x < 10){
        printf("%d\n", x);
        x = x + 1;
    }
    printf("-------------------------\n");

    do{
        printf("%d\n", x);
        x = x + 1;
    } while (x < 10);

    printf("-------------------------\n");

    char alphabet[27];
    char a = 'A';

    for(int i = 0; i < 26; i++){
        alphabet[i] = a + i;
    }
    alphabet[26] = 0;
    printf("%s\n", alphabet);

    return 0;
}
