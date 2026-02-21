#include <stdio.h>

void swap(int *i, int *j);

int main() {
    int u, v;
    printf("enter space seperated values: ");
    scanf("%d %d", &u, &v);

    printf("i=%d\n", u);
    printf("j=%d\n", v);

    swap(&u, &v);

    return 0;
}

void swap(int *i, int *j) {
    int k;
    k=*i;
    *i=*j;
    *j=k;
    printf("i= %d\n", *i);
    printf("j= %d\n", *j);

}