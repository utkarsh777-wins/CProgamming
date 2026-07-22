#include <bits/stdc++.h>

using namespace std;

void eList() {

    // declaration 
    list<int> ls;

    //same vector functions
    ls.push_back(3);    // {3}
    ls.emplace_back(4);     // {3, 4}

    // front operation 
    // in case of vector we had to use insert function for this, which is very costly 
    // very cheap time complexity as .push_front in list 
    ls.push_front(6);  // {6, 3, 4}

    // rest functinons same as vector 
    // begin, end, rbegin, rend, clear, insert, size, swap 

    for(const int& element : ls) {
        cout << element << " ";
    }

}

int main() {

    eList();

    return 0;

}