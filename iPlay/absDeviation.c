#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void calculateAbsoluteDeviation(int *arr, int n, double mean);

int main() {

    //user input, specifying the size of the array 
    int n;
    printf("number of months: ");
    if(scanf("%d", &n) != 1) return 0;

    int sum = 0;
    int m[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &m[i]);
        sum += m[i];
    }
    double mean = sum/n;

    calculateAbsoluteDeviation(m, n, mean);

}

void calculateAbsoluteDeviation(int *arr, int n, double mean) {
    for(int i=0; i<n; i++) {
        //we'll  use fabs from math.h to keep the deviation absolutely positive 
        double deviation = fabs(*(arr+i) - mean);
        // printf("%.2lf ", deviation); //trailing white space at the end 
        printf("%.2lf", deviation);
        if(i<n-1) {printf(" ");}     //only prints space if it's not the last element 
    }
    printf("\n");
} 