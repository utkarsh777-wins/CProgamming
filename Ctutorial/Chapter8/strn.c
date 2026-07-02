#include <stdio.h>
#include <string.h>

int main() {

    //EXERCISE

    char names[3][25] = {0};

    int rows = sizeof(names) / sizeof(names[0]);
    
    for(int i=0; i<rows; i++)
    {
        
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
        // printf("\n");
        
        printf("%s\n", names[i]);

    }
    
    // printf("Enter a name: ");
    // fgets(names[1], sizeof(names[1]), stdin);
    // names[1][strlen(names[1]) - 1] = '\0';
    // printf("\n");
    
    // printf("Enter a name: ");
    // fgets(names[2], sizeof(names[2]), stdin);
    // names[2][strlen(names[2]) - 1] = '\0';
    // printf("\n");
    
    // printf("%s\n", names[1]);
    // printf("%s\n", names[2]);

    return 0;
}