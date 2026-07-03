#include <stdio.h>

// enum Day {   //PURE ONE
//     SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
// };
typedef enum {
    SUNDAY=1, MONDAY=2, TUESDAY=3, WEDNESDAY=4, THURSDAY=5, FRIDAY=56, SATURDAY=7
}Day;

// enum status {
//     SUCCESS, FAILURE, PENDING
// };

typedef enum {
    SUCCESS, FAILURE, PENDING 
}Status;

void connectStatus(Status status); 

int  main() {

    /*
    
    --enum--
    a user-defined data type that consists of a set of named integer constants
    benefits: replaces numbers with readable names
    in c all constant should be uppercase letters
    unless you assign values to the constants manually 
    the value of constants in the set goes like zero based indexing 
    i.e. 0 for the first constant, 1 for the second and so on..
    
    */

    // enum Day today = SATURDAY;  //OUTPUTS 6 ..pure one
    // printf("%d", today);

    //using typedef we don't have to write enum 
    Day today = MONDAY; //2
    printf("%d\n", today);

    if(today == SUNDAY ||  today == SATURDAY) {
        printf("Weekend is here\n");
    } else {
        printf("Weekday is here\n");
    }

    printf("\n");

    // enum Status status = SUCCESS;
    Status status = SUCCESS;

    connectStatus(status);

    return 0;
}

void connectStatus(Status status) {

    switch(status) { 

        case SUCCESS:
        printf("Connection was successfull\n");
        break;
        
        case FAILURE:
        printf("Could not connect\n");
        break;

        case PENDING:
        printf("Connecting..\n");
        break;
    }

}