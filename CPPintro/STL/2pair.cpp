#include <iostream>
#include <utility>
#include <string>

void lePair() {

    
    // simpleton operations 
    
    std::pair<int, int> p = {6, 7};
    std::cout << p.first << " " << p.second << std::endl;
    
    std::pair<int, std::pair<int, int>> a = {4, {5, 6}};
    std::cout << a.first << " " << a.second.first << " " << a.second.second << std::endl;
    
    std::pair<int, int> arr[] = {{1, 5}, {6, 9}, {0, 0}};
    std::cout << arr[2].second << " " << arr[0].first << " " << arr[2].second << std::endl;
    
    // some suitable stuff

    std::pair<int, std::string> seige = {101, "BattleDrill"};

    // Accessing elements 
    std::cout << std::endl << seige.first << std::endl;
    std::cout << seige.second << std::endl;
    
    //modifying elements
    seige.first = 310;
    seige.second = "BattleBlimp";
    
    std::cout << seige.first << std::endl;
    std::cout << seige.second << std::endl;
    
}

int main() {
    
    /*
    
    #include <utility>
    std::pair<data_type1, data_type2> pair_name;
    
    */
    
    lePair();


    return 0;

}