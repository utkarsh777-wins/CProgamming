/*
    *
   ***
  *****
 *******
*********
// star triangle 
*/

// #include <iostream>
// int main() {
//     for(int i=1; i<=5; i++) {
//         for(int j=0; j<5-i; j++) {
//             std::cout << " ";
//         }
//         for(int k=0; k<i; k++) {
//             std::cout << "*";
//         }
//         for(int m=0; m<i-1; m++) {
//             std::cout << "*";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

#include <iostream>
/*
****
****
****
****
*/
void sqStar() {

    for(int i=1; i<5; i++) {
        for(int j=1; j<5; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

}


/*
*
**
***
****
*****
*/
void rightStar(int n) {
    int i=0;
    while(i<n) {
        int j=0;
        do {
            std::cout << "*";
            j++;
        } while(j<=i);
        
        std::cout << std::endl;
        i++;
    }
}

/*
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5
*/

void RightCount(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            std::cout << i << " ";

        } printf("\n");
    }
}
/*
1
2 2
3 3 3
4 4 4 4 
5 5 5 5 5
*/
void rightCount(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            std::cout << j << " ";

        } printf("\n");
    }
}

void rightInvStar(int n) {
    int i=n;
    while(i>0) {
        int j=0;
        do {
            std::cout << "*" << " ";
            j++;
        } while(j<i);
        std::cout << std::endl;
        i--;
    }
    std::cout << std::endl;
}

void InvRightCount(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++) {
            std::cout << j << " ";
        }
        std::cout << std ::endl;
    } printf("\n");
}

/*
    *
   ***
 *******
*********
*/

void printStar(int n) {
    for(int i=0; i<n; i++) {
        
        //spaces
        for(int j=0; j<(n-i-1); j++) {
            std::cout << " ";
        }
        
        //stars
        for(int k=0; k<(2*i+1); k++) {
            std::cout << "*";
        }
        
        //spaces
        for(int j=0; j<(n-i-1); j++) {
            std::cout << " ";
        }
        
        printf("\n");
    }

}

    /*
    *********
     *******
       ***
        *
    */

void printRstar(int n) {
    for(int i=0; i<n; i++) {
        //spaces 
        for(int j=0; j<i; j++) {
            std::cout << " ";
        }

        //stars 
        for(int s=0; s<(n*2 - i*2 - 1); s++) {
            std::cout << "*";
        }

        //spaces
        for(int k=0; k<i; k++) {
            std::cout << " ";
        }

        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void printSymmetric(int n) {
    // for(int i=1; i<n*2; i++) {
    //     if(i<=n) {
    //         for(int j=0; j<i; j++) {
    //             std::cout << "*";
    //         }
    //     } else if(i > n && i <= n*2) {
    //         for(int j=0; j<n*2-i; j++) {
    //             std::cout << "*";
    //         }
    //     }
    //     std::cout << std::endl;
    // }
    for(int i=1; i<=n*2-1; i++) {
        int stars =i;
        if(i > n) {stars = 2*n-i;}

        for(int j=0; j<stars; j++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}

int main() {
    sqStar();
    std::cout << std::endl;

    rightStar(5);
    printf("\n");
    rightCount(5);
    printf("\n");
    int n;
    std::cin >> n;
    RightCount(n);
    rightInvStar(n);
    InvRightCount(n);
    printStar(n);
    printRstar(n);
    printSymmetric(n);


    return 0;
}