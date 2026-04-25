#include <stdio.h>
#include <math.h>

double log_base_b(double x, double base) {
    return  log(x) / log(base);
}

int main() {
    printf("%lf\n", log_base_b(20, 2));

    return 0;
}