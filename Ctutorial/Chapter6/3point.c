#include <stdio.h>

int main() {
    int eon = 634;
    int *ptr = &eon;

    // type coersion convrting hexadesimal format to unsigned int
    printf("%p \n", &eon);
    printf("%u \n", &eon);



    return 0;
}