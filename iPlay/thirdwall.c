// faboonacci sequence
#include <stdio.h>

int fabo(int n);

int main() {
    int n;
    printf("enter you number till sequence: ");
    scanf("%d", &n);
}

int fabo(int n) {

    int fab;
    if(n==0) {return 0;}
    if(n==1) {return 1;}
    int nm1 = fabo(n-1);
    int nm2 = fabo(n-2);
    fab = nm1 + nm2;
    printf("fab: %d", fab);
}