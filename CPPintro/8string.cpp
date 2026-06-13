#include <iostream>
// #include <string>

void strInput(char str[]) {
    for(int i=0; str[i] !='\0'; i++) {
        std::cin >> str[i];
    }
}
int main() {
    char name[];
    // std::cin >> name;
    strInput(name);
    std::cout << name;
}