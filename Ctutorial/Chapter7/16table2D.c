#include <stdio.h> 

void storeTables(int arr[][10], int row, int number);
void printArray(int arr[][10], int row, int n);

int main() {
    int tables[2][10];

    storeTables(tables, 0, 4);
    storeTables(tables, 1, 5);

    printArray(tables, 0, 10);
    printf("\n");
    printArray(tables, 1, 10);


    return 0;
}

void storeTables(int arr[][10], int row, int number) {
    for(int i=0; i<10; i++) {
        arr[row][i] = number*(i+1);
    }
}

void printArray(int arr[][10], int row, int n) {
    for(int i=0; i<10; i++) {
        printf("%d ", arr[row][i]);
    }
}