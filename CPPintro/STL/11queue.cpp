#include <bits/stdc++.h>

using namespace std;

/*

FIFO - first in first out 
O(1) complexity again, all operations happening in constant time 
in order to print the elements of the queue we need to clear the front of queue,
print the front and keep doing so until the queue is empty() -- 1

*/

void eQueue() {

    queue<int> q;
    q.push(1);  // {1}
    q.push(2);  // {1, 2}
    q.emplace(6);   // {1, 2, 6}

    q.back() += 1;

    cout << q.back() << endl;   // prints 7

    // {1, 2, 7}
    cout << q.front() << endl; // prints

    q.pop(); // {2, 7}

    cout << q.front() << endl;  // prints 2

    // for(const auto& element : q) {   // apparently we can't print the elements of queue like this 
    //     cout << element << " " << endl;
    // }

    // while not true/1
    while(!q.empty()) {
        cout << q.front() << " ";
        // popping the front 
        q.pop();
    }

    cout << endl;

}

int main() {

    eQueue();
    
    return 0;

}