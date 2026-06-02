#include <iostream>

int main() {
    
    int x, y, z;
    std::cin >> x >> y >> z;

    std::cout << x << std::endl << y << std::endl << z << std::endl;
    std::cout << x << " " << y << " " << z;

    return 0;
}

// alternatively 
// conflicting, not ideal for large projects 

// #include <iostream>

// using namespace std;

// int main() {

//     int a, b, c;
//     cin >> a >> b >> c;

//     cout << a << " " << b << " " << c;

//     return 0;
// }