#include <stdio.h>

/*

--typedef--
reserved keyword that gives an existing datatype a 'nickname'
helps simplify complex types and improve code readability 

typedef existing_type new_name;
in C we need to specify the size of string while renaming
don't need to specify size while using string as char* pointer

*/

typedef int Number;
// typedef char string[50];
typedef char* string;
typedef char initials[4];       // here 3 bytes are for the letters and one byte for the null terminator

int main() {

    // Number x = 4;
    // Number y = 2;
    // Number z = x + y;

    // printf("%d\n", z);
    
    string name = "Bye Bye";
    printf("%s\n", name);
    
    // char user1[] = "LFL";
    // char user2[] = "CSR";
    // char user3[] = "GOS";
    // char user4[] = "DOF";
    initials user1 = "LFL";
    initials user2 = "CSR";
    initials user3 = "GOS";
    initials user4 = "DOF";
    
    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}