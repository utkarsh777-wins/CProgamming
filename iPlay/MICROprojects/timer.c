#include <stdio.h>
#include <windows.h>
// #include <unistd.h>  //linux/mac

int main() {

    for(int i=1; i<11; i++) {

        // adding a delay of approx 100 milisec 
        Sleep(1000);
        // sleep(1000); //linux.mac
        printf("%d\n", i);
    }

    printf("Your time is up!\n");

    return 0;
}
