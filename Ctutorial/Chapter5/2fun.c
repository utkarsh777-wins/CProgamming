#include <stdio.h>

void printHello();  //declaration

int main() {
    printHello();   //can call the func multiple times
    printHello();
    printHello();
    return 0;
}

void printHello() {     //defination
    printf("Hellooooooooo\n");
}