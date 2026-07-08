#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>

int main() {

    // DIGITAL CLOCK PROGRAM

    time_t rawtime = 0;     // Jan 1 1970 (Epoch)

    // a pointer to struct in the time header file
    // make  sure not to derefrence *pTime before assigning it -- can lead to segmentation fault  
    struct tm *pTime = NULL; 
    bool isRunning = true;
    
    printf("DIGITAL CLOCK\n");

    // main loop -- over here to execute some code each second

    while(isRunning) {

        // updating the time with the current timm 
        time(&rawtime);

        // prints the amount of seconds that have passed since our reference point(epoch)
        // printf("%ld\n", rawtime);

        // using time struct from time.h
        // will return a pointer to a time struct that contains 
        // those fields of hours minutes and seconds
        pTime = localtime(&rawtime);

        // first we'll need to derefrence the pointer
        // and then access one of its members 
        // printf("%02d:%02d:%02d\n", (*pTime).tm_hour, (*pTime).tm_min, (*pTime).tm_sec);
        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        
        // may not work on other compilers for windows
        // printf("test\n");
        // sleep(1);   //seconds/linux 

        Sleep(1000);    //windows function / miliseconds




        
    }


    return 0;
}