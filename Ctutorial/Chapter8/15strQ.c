#include <stdio.h>
#include <string.h>
//slice n to m

// void slice(char str[], int n, int m) {
//     for(int i=n; i<m; i++) {
//         printf("%c", str[i]);
//     }
// }
int validateInput(char str[],  int n, int m);
void slice(char str[], int n, int m) {
    char newStr[200];
    int j=0; 

    for(int i=n; i<m; i++, j++) {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';

    puts(newStr);
}
int main() {
    char str[100];
    scanf(" %[^\n]", &str);

    int n=3, m=7;

    slice(str, n, m);

}