#include <iostream>

int main() {

    int marks;
    std::cin >> marks;

    char r = ' ';
    if(marks<33) {r = 'F';}
    else if(marks<40) {r = 'E';}
    else if(marks<50) {r = 'D';}
    else if(marks<60) {r = 'C';}
    else if(marks<70) {r = 'B';}  
    else if(marks<80) {r = 'A';} 
    else if(marks<90) {std::cout << "A+" << std::endl; return 0;} 
    else {
        if(marks >= 90 && marks <= 100) {std::cout << "Cheetah" << std::endl;}
        else {std::cout << "Invalid" << std::endl;}
        return 0;
    }

    std::cout << r << std::endl;

    return 0;

}