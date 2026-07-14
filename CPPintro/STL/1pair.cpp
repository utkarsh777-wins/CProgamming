#include <bits/stdc++.h>

using namespace std;

void rePair() {

    // storing in pair 
    pair<int, int> p = {4, 7};

    // accessing the data stored in p
    cout << p.first << " " << p.second << endl;

    // nested pair 
    pair<int, pair<int, int>> z = {1, {3, 6}};
    cout << z.first << " " << z.second.first << " " << z.second.second << endl;

    // pair treated as a dataype while initializing an array 
    pair<int, int> arr[] = {
        {1, 3}, {4, 7}, {9, 5}
    };

    // accessing the value at idx
    cout << arr[2].first << endl;


}

int main() {

    /*

    STANDARD TEMPORARY LIABRARY:
    -Algotrithm 
    -Containers
    -Functions 
    -Iterators 
    
    */

    rePair();


    return 0;
    
}