#include <stdio.h>

// armstrong number
int main() {
    int n, remainder, result=0, loop=0;
    printf("Enter : ");
    scanf("%d", &n);

    // saving a copy so I can mess with n freely 
    int og = n;
    // 
    while(n!=0) {
        n=n/10;
        loop = loop + 1;
    }

    // resetting the value of n which had become 0 after the previous loop 
    n= og;
    // stripping em digits off 
    while(n != 0) {
        remainder = n%10;
        int pew = 1;
        for(int i=1; i<=loop; i++) {
            pew *= remainder;
        }
        // each digit after being powered will add into result
        result += pew;
        n=n/10;
    }

    // we compare result to the original value 
    if(result == og) {printf("Armstrong wall down..");}
    else{printf("this is your limit");}
    
    return 0;
}

// clean this mess 