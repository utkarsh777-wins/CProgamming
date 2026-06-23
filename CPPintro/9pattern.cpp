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
    std::cout << std::endl;
}

void binPattern(int n) {

    int start = 0;
    for(int i=0; i<n; i++) {
        if(i%2 == 0) {start = 1;} else {start = 0;}

        for(int j=0; j<=i; j++) {
            std::cout << start << " ";
            start = 1 - start;
        }
        std::cout << std::endl;
        
    }
    std::cout << std::endl;
}

// void numPattern(int n) {
//     for(int i=1; i<n; i++){
//         for(int j=1; j<=i; j++) {
//             std::cout << j;
//         }
//         for(int k=0; k<2*(n-i-1); k++) {
//             std::cout << " ";
//         }
//         for(int j=i; j>0; j--) {
//             std::cout << j;
//         }
//         std::cout << std::endl;
//     }
// }
void numPattern(int n) {
    int space = 2*(n-1);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            std::cout << j;
        }
        for(int j=0; j<space; j++) {
            std::cout << " ";
        }
        for(int j=i; j>0; j--) {
            std::cout << j;
        }
        space -= 2;
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void cRight(int n) {

    int start=1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            std::cout << start << " ";
            start++;
        }

        std::cout <<std::endl;
    }
    std::cout <<std::endl;
}

void rightChar(int n) {
    for(int i=0; i<n; i++) {
        for(char c = 'A'; c<='A'+i; c++) {
            std::cout << c << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void invRC(int n) {
    for(int i=n-1; i>=0; i--) {
        for(char c = 'A'; c<='A'+i; c++) {
            std::cout << c << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void sameChar(int n) {
    for(int i=0; i<n; i++) {
        char c = 'A'+i;
        for(int j=0; j<=i; j++) {
            std::cout << c << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void revrend(int n) {
    for(int i=0; i<n; i++) {
        char ch = 'A';
        
        for(int j=n-i-1; j<n; j++) {
            //ahh so this was messing up the patterm by adding to the existing change each time
            ch = ch+j;
            std::cout << ch << " ";
            //so I reassigned it to 'A' so that adding j ovber and over again won't be a proble anymore..
            ch = 'A';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void justify(int n) {
    for(int i=0; i<n; i++) {
        for(int s=0; s<n-i-1; s++) {
            std::cout << " ";
        }
        char ch = 'A';
        int breakPoint = (2*i+1)/2;
        for(int j=0; j<2*i+1; j++) {
            std::cout << ch;
            if(j<breakPoint) {ch++;}
            else {ch--;}
        }
        for(int s=0; s<n-i-1; s++) {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// void voidPrism(int n) {
//     for(int i=0; i<=n*2; i++) {
        
//         //star count
//         int str = n-i;
//         if(i==n) {continue;}
//         if(i>=n) {str = i-n;} 

//         //stars
//         for(int s =0; s<str; s++) {
//             std::cout << "*";
//         }
 
//         //spaces
//         int v = i*2;
//         if(i>=n) {v = (2*n-i)*2;}
//         for(int j=0; j<v; j++) {
//             std::cout << " ";
//         }

//         //stars
//         for(int s=0; s<str; s++) {
//             std::cout << "*";
//         }
//         std::cout << std::endl;
//     }
//     std::cout << std::endl;
// }
void voidPrism(int n) {

    int spaces = 0;
    // upper half 
    for(int i=0; i<n; i++) {

        //stars
        for(int j=0; j<n-i; j++) {
            std::cout << "*";
        }

        //spaces 
        for(int s=0; s<spaces; s++) {
            std::cout << " ";
        }

        //stars
        for(int j=0; j<n-i; j++) {
            std::cout << "*";
        }

        spaces +=2;
        std::cout << std::endl;
    }

    //lower half
    spaces = 2*n-2;
    for(int i=1; i<=n; i++) {

        //stars
        for(int j=0; j<i; j++) {
            std::cout << "*";
        }

        //spaces
        for(int s = 0; s<spaces; s++) {
            std::cout << " ";
        }
        
        //stars
        for(int j=0; j<i; j++) {
            std::cout << "*";
        }
        
        spaces -= 2;
        printf("\n");
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
    binPattern(n);
    numPattern(n);
    cRight(n);
    rightChar(n);
    invRC(n);
    sameChar(n);
    justify(n);
    revrend(n);
    voidPrism(n);

    return 0;
}