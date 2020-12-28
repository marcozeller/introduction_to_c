#include <stdio.h>

int main(int argc, char *argv[]){

    int b_true = 1;
    int b_true_2 = 99;
    int b_false = 0;

    if(b_true){
        printf("b_true == true\n");
    }
    if(b_true){
        printf("b_true_2 == true\n");
    }
    if(b_false){
        printf("b_false == true\n"); // is not executed
    } else {
        printf("b_false == false\n");
    }

    // there is also the case statement which is essentially syntactic sugar for an if-else latter

    return 0;
}
