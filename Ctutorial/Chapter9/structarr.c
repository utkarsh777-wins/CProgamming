#include <stdio.h>

typedef struct  {
    char model[25];
    int year;
    int price;
} Car;

int main() {

    /*
    
    array of structs = Array where each element contains 
    a struct {}
    helps organize and groups together related data
    
    */

    Car cars[] = {
        {"Mustang", 2019, 32000},       //0th idx
        {"Corvette", 2026, 68000},       //1st idx
        {"Challenger", 2021, 27000}     //2nd idx
    };

    int numbers = sizeof(cars) / sizeof(cars[0]);

    for(int i=0; i<numbers; i++) {

        // accessing our array through idx numbers 
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);

    }

    // Car car1 = {"Mustang", 2018, 32000};
    // Car car2 = {"Corvette", 2026, 68000};
    // Car car3 = {"Challenger", 2021, 27000};

    // printf("%s %d $%d\n", car1.model, car1.year, car1.price);
    // printf("%s %d $%d\n", car2.model, car2.year, car2.price);
    // printf("%s %d $%d\n", car3.model, car3.year, car3.price);

    return 0;
}