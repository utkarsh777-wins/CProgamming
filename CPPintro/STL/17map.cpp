#include <bits/stdc++.h> 

using namespace std;

/*

a map container stores data in {key, value} pair 

time complexity for map is log(N)

time complexity of unordered map is constant time O(1)
in worst case it is O(N)

*/

void eMap() {

    map<int, int> mpp;

    // map<int, pair<int, int>> mpp;

    // map<pair<int, int>, int> mpp;

    mpp[1] = 2;     // at key 1 we store 2
    mpp.emplace(3, 1);    // at key 3 store 1

    mpp.insert({2, 4});     

    // mpp[{2, 3}] = 10;

    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl;
    cout << mpp[2] << endl;

    // for keys that do not exist 
    cout << mpp[5] << endl;     // 0 or null

    auto itt = mpp.find(3); // doubt
    cout << *(itt).second << endl;

    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty, are the same

}

void multiMap() {

    // everything same as maps, only it can store duplicate keys 
    // only mpp[key] cannot be used here 

}

void unorderedMap() {

    // unique keys but unsorted 

}

int main() {

    eMap();

    return 0;

}