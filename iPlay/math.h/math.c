#include <stdio.h>
#include <math.h>

int main() {

    //integers 

    int x = 16;
    int y = -16;
    // x = sqrt(x);
    x = pow(x, 3);
    
    // x = abs(x);
    printf("%d\n", x);
    
    
    //float type
    float f = -3.94;
    // f = pow(f, 2);
    // f = round(f);
    // f = ceil(f); 
    // f = floor(f);
    f = fabs(f);
    
    printf("%f", f);

    printf("\n");
    
    // scientific functions
    
    float l = 5;
    l = log(l);

    double radians = 45;

    // radians = sin(radians);
    // radians = cos(radians);
    radians = tan(radians);







    printf("%lf\n", l);
    printf("%lf\n", radians);
    
    
    
    
    
    

}