#include <bits/stdc++.h>

using namespace std;

/*

-- priority_queue 
similar to queue and .......
the largest element stays at the top 
be it the largest integer, character, float or lexicographically the largest string 
this is not a linear dataStructure => data s not stored linearly 
inside of it a tree datastructure is maintained => at inside data is maintained in a tree
maxHeap by default 

*/

void pQueue() {

    priority_queue<int> pq;
    pq.push(4);     // {4}
    pq.push(2);     // {4, 2}
    pq.push(7);     // {7, 4, 2}
    pq.emplace(1);  // {7, 4, 2, 1}

    cout << pq.top() << endl; // prints 7 the maximum value within the pqueue

    pq.pop(); // {4, 2, 1}

    // loop runs until queue is empty 
    while(!pq.empty()) {

        // since this is maxHeap priority queue, we print the top as our first out
        cout << pq.top() << " ";

        // popping the first value in the queue making it so the next max value will be the top now 
        pq.pop();

    }

    cout << endl;

    // minHeap 
    priority_queue<int, vector<int>, greater<int>> qp;
    qp.push(5); // {5}
    qp.push(8); // {5, 8}
    qp.push(1); // {1, 5, 8}
    qp.emplace(3); // {1, 3, 5, 8}

    cout << qp.top() << endl;
    qp.pop();

    while(!qp.empty()) {
        cout << qp.top() << " ";
        qp.pop();
    }
}

int main () {

    pQueue();

    return 0;

}