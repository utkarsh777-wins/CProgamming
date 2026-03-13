// forward jump(skip)
#include <stdio.h>

int main() {
    int n;
    printf("enter your bit: ");
    scanf("%d", &n);

    if(n == 0) {
        goto shutdown;
    }
    else{printf("RunnNNNNNN\n");}

    shutdown:
    printf("hah! you're done for\n");
    printf("Booting the system\n");

    return 0;
}