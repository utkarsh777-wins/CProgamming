// #include <iostream>

// using namespace std;

// int main() {
//     int i=0;
//     while(i<10) {
//         cout << i << " ";
//         i++;
//     }
//     return 0;
// }

// #include <iostream>

// int main() {
//     char letter = 'A';

//     int i=0;
//     do {
//         std::cout << letter;
//         int j=i-1;
//         while(j>0) {
//             std::cout << static_cast<char>(letter+(i-j));
//             j--;
//         }
//         if(i == 0) {std::cout << std::endl;} 
//         else {std::cout << static_cast<char>(letter+i) << std::endl;}
//         i++;
//     } while(i < 5);

//     return 0;
// } //that was too nasty

// now we got for the less nasty version of it

// #include <iostream>

// int main() {
//     int i=0;
//     int c='A';

//     do {
//         int j=0;
//         do {
//             std::cout << static_cast<char>(c+j); //oh btw static_cast<char> helps us type cast int into char 
//             j++;
//         } while(j<=i);

//         std::cout << "\n";
//         i++;
//     } while(i<5);

//     return 0;
// }

//neat 
#include <iostream>

using namespace std;

int main() {
    char c = 'A';
    int rows =5;

    for(int i=0; i<rows; i++) {
        for(int j=0; j<=i; j++) {
            cout << static_cast<char>(c+j);
        }
        cout << endl;
    }

    return 0;
}