#include <stdio.h>
#include <string.h>

int main() {
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    //first adjective 
    printf("enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';
    
    //first noun
    printf("enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';
    
    //second adjective
    printf("enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';
    
    //verb
    printf("enter a verb (action in v3): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1]  = '\0';
    
    //third adjective 
    printf("enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    //story time
    printf("once opon a time I was at a %s location\n", adjective1);
    printf("right there I met a %s\n", noun);
    printf("the looked so %s\n ", adjective2);
    printf("it was %s as if it didn't even notice me\n", verb);
    printf("that felt so %s haha\n", adjective3);

    //need to add some more proper grammer, as I am currently studying grammer so it's only right that I appply my learnings
    //add adverbs to this game
    //a better story I'd need
}