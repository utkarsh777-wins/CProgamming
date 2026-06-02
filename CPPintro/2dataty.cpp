// dataTypes 

// #include <iostream>

// using namespace std;

// int main() {
//     //cin and cout are broken arren't they, this is just soo damn broken different datatypes at once 

//     int x;
//     long a;
//     long long z;
//     float y;
//     double b;
//     char star = '*';

//     cin >> x >> a >> z >> y >> b;

//     cout << x << endl << a << endl << z << endl << y << endl << b;
// }

#include <iostream>

int main() {
    int a;
    long b;
    long long c;

    float y;
    double z;

    char star;
    // std::cin >> a >> b >> c >> y >> z >> star;
    // since char doesn't skip whitespaces, unlike other operators hence is why we get the error 
    // std::cin >> a >> b >> c >> y >> z >> std::ws >> star; //that still didn't quite go right, looks like I'll just have to do the sepeately 

    // still didn't quite work right 
    // std::cin >> a >> b >> c >> y >> z;
    // std::cin >> star;

    std::cin >> a >> b >> c >> y >> z; // now that made me humble
    // std::cin >> std::ws;
    // star = std::cin.get();
    //ghosts live in this place, it smh worked this time 
    std::cin >> star;
    
    
    std::cout << a << std::endl << b << std::endl << c << "\n" << y << "\n" << z << std::endl << star << std::endl;
    return 0;

}