#include <stdio.h>

void birthday(int age);
void birthDay(int* age);

int main() {
    /*
    
    --pointer--
    a variable that stores the memory address of another variable.
    Benefit: They help avoid wasting memory by allowing you to pass the 
    address of a large data structure instead of copying the entire data.
    * - derefrence operator (value at address)
    & - address of operator 
    */

    int age = 22;
    int* pAge = &age;

    // printf("%p\n", &age);
    // printf("%p\n", pAge);

    birthDay(pAge);
    // birthDay(&age);

    printf("You are %d years old\n", age);

    return 0;
}

//pass by value 
void birthday(int age) {
    age++;
}

void birthDay(int* age) {
    (*age)++;
}