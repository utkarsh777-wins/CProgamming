#include <stdio.h>

int main() {

    // WRITE A FILE

    //relative file path 

    // FILE *pFile = fopen("fruits.txt", "w");

    // char text[] = "Juicy fruits are here\nEat em up";
    
    // if(pFile == NULL) {
    //     printf("Couldn't fetch the file\n");
    //     return 1;
    // }

    // fprintf(pFile, "%s", text);

    // printf("File was written successfully\n");

    // fclose(pFile);
    
    // absolute file path

    FILE *pFile = fopen("C:\\Desktop\\fruits.txt", "w");

    char text[] = "Juicy fruits are here\nEat em up";

    if(pFile == NULL) {
        printf("Couldn't fetch the file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully\n");

    fclose(pFile);

    return 0;
}