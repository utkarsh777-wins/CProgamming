#include <stdio.h>
#include <string.h>
#include <ctype.h>

// no. of occurences of a character in a string
int main() {

    char str[100];
    int i=0, c;
    int visited[100] = {0};

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';    //removing newline 

    while(str[i]!='\0') {

        if(visited[i] == 1) {
            i++;
            continue;
        } 

        c=1;
        
        for(int j=i+1; str[j]!='\0'; j++) {
            if(str[i] == str[j]) {
                c++;
                visited[j] = 1;
            }
        } printf(" %c occur %d times\n", str[i], c);

        i++;

    }

    printf("Ain't that neat^^\n");

    return 0;

}



// count the number of occurences of uppercase in a string 

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// char countUpper(char str[]) {

//     //using isuper function 
//     int count =0;
//     for(int i=0; str[i]!='\0'; i++) {
        
//         if(isupper(str[i])) {
//             count+=1;
//         }

//     }

//     return count;
// }

// int main() {
//     //toupper cvonverts a single character into upper case

//     char str[100];
//     printf("Enter: ");
//     fgets(str, sizeof(str), stdin);

//     //incorrect, this will count anything that isn't an uppercase 
//     // int count=0;
//     // for(int i=0; str[i]!='\0'; i++) {
//     //     if(str[i] == toupper(str[i])) {
//     //         count ++;
//     //     }
//     // }
    
//     // the manual way 
//     // int count = 0;
//     // for(int i=0; str[i]!='\0'; i++) {
//     //     if(str[i] >= 'A' && str[i] <= 'Z') {
//     //         count+=1;
//     //     }
//     // }

//     int count = countUpper(str);

//     printf("%d", count);

//     return 0;
// }