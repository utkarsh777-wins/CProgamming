#include <stdio.h>

void tempGauge(int c);

int main() {
    int temp;
    printf("enter temperature(Celsius): ");
    scanf("%d", &temp);

    tempGauge(temp);


}

void tempGauge(int c) {
    if(c<10) {
        printf("COLD AF");
    } else if(c>40) {printf("SHH HOT AF");} else {printf("MID FR");}
}