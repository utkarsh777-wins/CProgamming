#include <stdio.h>

int main() {
    int x, *ptr;
    ptr = &x;
    *ptr = 0;   //value at adress of x is easily manipulated like this 

    printf("x= %d\n", x);
    printf("*ptr= %d\n", *ptr);
    // printf("%u", ptr);   570424436

    // again the increament of value at the memory address 
    *ptr += 5;
    printf("x= %d\n", x);
    printf("*ptr= %d\n", *ptr);

    // hm mm post increament interesting --i didn't expect post increamenrt to work on the first print statement
    (*ptr)++;
    printf("x= %d\n", x);
    printf("*ptr = %d", *ptr);


    return 0;
}