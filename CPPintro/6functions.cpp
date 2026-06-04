#include <iostream>

void printCarp(char c, int row) {
    for(int i=row; i>=0; i--) {
        for(int j=0; j<=i; j++) {
            std::cout << static_cast<char>(c+j);
        }
        std::cout << std::endl;
    }
}

void printCarpe(char c) {
    int i=0;
    do {
        int j=0;
        do {
            std::cout << static_cast<char>(c+i);
            j++;
        } while(j<=i);
        std::cout << std::endl;

        i++;
    } while(i<5);

}

/*
   A
  ABA
 ABCBA
ABCDCBA
*/
void carpeD(char c) {
    for(int i=5; i>0; i--) {
        for(int j=0; j<=i; j++) {
            for(int k=0; k<=i/2; k++) {
                std::cout << " ";
            }
            std::cout << static_cast<char>(c+j);
        }
        std::cout << std::endl;
    }
}

int main() {
    char c = 'A';
    int n = 4;

    printCarp(c, n);
    std::cout << std::endl;

    printCarpe(c);
    std::cout << std::endl;

    carpeD(c);

    return 0;
}