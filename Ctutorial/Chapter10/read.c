#include <stdio.h>

int main() {

    // READ A FILE 
    // relative file path

    // FILE *pFile = fopen("input.txt", "r");

    // // buffer -- temporarily stores data for us to read(waiting room)
    // // 1Kb
    // char buffer[1024] = {0};

    // if(pFile == NULL) {
    //     printf("Couldn't fetch the file\n");
    //     return 1;
    // }

    // // once we run out of text fgets will return NULL 
    // while(fgets(buffer, sizeof(buffer), pFile) != NULL) {

    //     // we'll display what's inn our buffer
    //     printf("%s", buffer);

    // }
    
    // absolute file path

    FILE *pFile = fopen("C:\\Desktop\\fruits.txt", "r");

    // buffer -- temporarily stores data for us to read(waiting room)
    // 1Kb
    char buffer[1024] = {0};

    if(pFile == NULL) {
        printf("Couldn't fetch the file\n");
        return 1;
    }

    // once we run out of text fgets will return NULL 
    while(fgets(buffer, sizeof(buffer), pFile) != NULL) {

        // we'll display what's inn our buffer
        printf("%s", buffer);

    }

    fclose(pFile);

    return 0;
}