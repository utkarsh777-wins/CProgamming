#include <stdio.h>

int calculatePercentage(int x, int y, int z);

int main() {

    int science = 98;
    int math = 99;
    int sanskrit = 94;

    printf("Total Percentage= %d", calculatePercentage(science, math, sanskrit));

}

int calculatePercentage(int x, int y, int z) {
    return (x + y + z) / 3;
}