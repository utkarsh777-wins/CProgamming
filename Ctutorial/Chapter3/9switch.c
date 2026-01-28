#include <stdio.h>

int main() {
    // user input
    char day; //m-mon, t-tue, T-thu, s-sat, S-sun, f-fri
    printf("enter day(first letter of the day) ");
    scanf(" %c", &day);

    // switch case on day using char
    switch (day) {
        case 'm' : printf("monday \n");
                   break;
        case 't' : printf("tuesday \n");
                   break;
        case 'w' : printf("wednesday \n");
                   break;
        case 'T' : printf("thursday \n");
                   break;
        case 'F' : printf("friday \n");
                   break;
        case 's' : printf("saturday \n");
                   break;
        case 'S' : printf("sunday \n");
                   break;
        default : printf("invalid day");
    }
}