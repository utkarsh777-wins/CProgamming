// backward jump(loop)

#include <stdio.h>

int main() {
    int num;

    user_input:
    printf("Enter positive number: ");
    scanf("%d", &num);

    if(num<0) {goto user_input;}
    else {printf("Yesss! that's the only postivity coming out of you kek \n");}


}