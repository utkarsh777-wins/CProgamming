#include <stdio.h>

int main() {
    int age = 22;
    // printf("age:", age); ouput age: 
    //couldn't get the value of age we wanted
    printf("age is %d\n", age);

    {

        age = 67;
        printf("%d", age);
    }

    printf("\n%d", age);

    return 0;
}
// for integer values %d