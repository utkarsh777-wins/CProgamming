#include <iostream>
#include <string>
//not  owrking without the headerfle huh

void strInput(char str[]) {
    for(int i=0; str[i] !='\0'; i++) {
        std::cin >> str[i];
    }
}
int main() {
    // char name[];
    std::string name;
    std::cin >> name;
    // strInput(name);
    std::cout << name;
}