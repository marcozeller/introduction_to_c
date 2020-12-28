#include <stdio.h>

int bin_to_dec(int input){
    int output = 0;
    int factor = 1;
    while(input > 0){
        if(input%10 != input %2){
            return -1; // if input not in binary format return -1
        }
        output = output + factor*(input%2);
        input = input / 10;
        factor = factor * 2;
    }
    return output;
}

int dec_to_bin(int input){
    int output = 0;
    int factor = 1;
    while(input > 0){
        output = output + factor*(input%2);
        input = input / 2;
        factor = factor * 10;
    }
    return output;
}

int main(int argc, char *argv[]){

    int input_bin;
    printf("Geben sie eine Binärzahl ein: ");
    scanf("%d", &input_bin);
    printf("Entsprechende Dezimalzahl: %d\n", bin_to_dec(input_bin));

    int input_dec;
    printf("Geben sie eine Dezimalzahl ein: ");
    scanf("%d", &input_dec);
    printf("Entsprechende Binaerzahl: %d\n", dec_to_bin(input_dec));

    // test numbers if if bin_to_dec and dec_to_bin are inverses for numbers between 0 to 999
    for(int i = 0; i<1000; i++){
        if(bin_to_dec(dec_to_bin(i)) != i){
            printf("Fehler bei: %d\n", i);
        }
    }

    return 0;
}
