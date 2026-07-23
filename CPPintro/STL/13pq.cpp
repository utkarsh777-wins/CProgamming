#include <bits/stdc++.h>

using namespace std;

/*

-- priority_queue 
similar to queue and .......
the largest element stays at the top 
be it the largest integer, character, float or lexicographically the largest string 
this is not a linear dataStructure => data s not stored linearly 
inside of it a tree datastructure is maintained => at inside data is maintained in a tree

*/

void pQueue() {

    priority_queue<int> pq;
    pq.push(4);     // {4}
    pq.push(2);     // {4, 2}
    pq.push(7);     // {7, 4, 2}
    pq.emplace(1);  // {7, 4, 2, 1}

    cout << pq.top() << endl; // prints 7



}

int main () {


    return 0;

}