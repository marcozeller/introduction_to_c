#include <stdio.h>

void fun1(){
    printf("inside fun1\n");
}

void fun2(){
    printf("inside fun1\n");
}

void execute_f1_f2(void (*f1)(), void (*f2)()){
    f1();
    f2();
}

int main(int argc, char *argv[]){

    // void (*func)(int *, char);
    void (*f1)() = &fun1;
    void (*f2)() = &fun2;
    execute_f1_f2(f1, f2);

    return 0;
}
