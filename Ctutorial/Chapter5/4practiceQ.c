// write two funcntions - one to print "Hello" & 
// second to print "goodbye"
#include <stdio.h>

void printHello();
void goodBye();

int main() {
    printHello();
    goodBye();
    goodBye();
    printHello();
    goodBye();

}

void printHello() {
    printf("So hollow\n");
}
void goodBye() {
    printf("Begone\n");
}