#include <bits/stdc++.h>

using namespace std;

void eDeque() {

    deque<int>dq;
    dq.push_back(2); // {2}
    dq.emplace_back(1); // {2, 1}
    dq.push_front(5); // {5, 2, 1}
    dq.emplace_front(7); // {7, 5, 2, 1}

    dq.pop_back();  // {7, 5, 2}
    dq.pop_front();     // {5, 2}

    cout << dq.back() << endl;   // 2

    cout << dq.front() << endl;  // 5

    // rest functions are same as vectors 
    // begin, end, rbegin, rend, clear, insert, size, swap

    for(const auto& element : dq) {
        cout << element << " ";
    }

}

int main() {

    eDeque();

    return 0;

}